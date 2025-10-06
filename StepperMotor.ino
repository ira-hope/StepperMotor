#include <Stepper.h>
// For 28BYJ-48 motor with ULN2003 driver board
const int stepsPerRevolution = 2048;
// Pins connected to IN1, IN2, IN3, IN4 on ULN2003
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
void setup() {
  // Set motor speed (RPM)
  myStepper.setSpeed(10); // Keep it low, this motor is slow (max ~15 rpm)
  Serial.begin(9600);
  Serial.println("Stepper Motor Control Ready!");
  Serial.println("Type: rotate 90 or rotate -180");
}
void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    if (input.startsWith("rotate")) {
      int angle = input.substring(6).toInt();
      // Convert angle to steps
      long steps = (long)angle * stepsPerRevolution / 360;
      // Move the motor
      myStepper.step(steps);
      // Feedback
      Serial.print("Rotated ");
      Serial.print(angle);
      Serial.println(" degrees");
    } else {
      Serial.println("Invalid command. Try: rotate 90 or rotate -180");
    }
  }
}
