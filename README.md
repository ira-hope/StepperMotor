Stepper Motor Serial Control (Arduino)
📘 Overview

This project lets you control a 28BYJ-48 stepper motor with a ULN2003 driver board using the Arduino Serial Monitor.
You can type commands such as:

rotate 90
rotate -180


The motor will rotate by the entered angle in the correct direction.

⚙️ Hardware Requirements

Arduino board (Uno, Nano, Mega, etc.)

28BYJ-48 Stepper Motor

ULN2003 Driver Board

Jumper wires

USB cable

🧩 Wiring Connections
ULN2003 Pin	Arduino Pin
IN1	8
IN2	10
IN3	9
IN4	11
VCC	5V
GND	GND
🖥️ How to Use

Connect the motor and driver as shown above.

Upload the code to your Arduino.

Open the Serial Monitor.

Set the baud rate to 9600.

Type a command like:

rotate 180
rotate -90


and press Enter.

⚡ Example Output
Stepper Motor Control Ready!
Type: rotate 90 or rotate -180
rotate 90
Rotated 90 degrees
rotate -270
Rotated -270 degrees

🧾 Notes

Recommended speed: 10–15 RPM

Positive values rotate clockwise, negative values rotate counterclockwise

If rotation direction is incorrect, swap any two motor pins