🤖 Obstacle Avoiding Car (Arduino + L293D)

This is an autonomous obstacle-avoiding robot car powered by an Arduino Uno, L293D Motor Driver Shield, HC-SR04 Ultrasonic Sensor, and a Servo Motor.

It scans for obstacles using the ultrasonic sensor mounted on a servo, decides the best direction, and maneuvers accordingly using four DC motors.

🔧 Components Used

Component

Description

Arduino Uno

Main microcontroller board

L293D Motor Driver Shield

Controls 4 DC motors

HC-SR04 Ultrasonic Sensor

Detects obstacles in front

Servo Motor (SG90)

Rotates sensor to scan surroundings

4x DC Motors

Drives the car

Power Supply (Battery)

Powers the system

⚡ Wiring Overview

Pin on Arduino (via Shield)

Connected To

A0

Ultrasonic TRIG

A1

Ultrasonic ECHO

D9 (SERVO 1)

Servo signal wire

M1–M4

DC motors (connected to L293D shield motor ports)

Servo is connected to SERVO 1 port on the L293D shield, which maps to digital pin 9.

📂 Libraries Required

Install these from the Arduino Library Manager:

AFMotor – for motor control

NewPing – for reliable ultrasonic distance sensing

Servo – built-in in the Arduino IDE

🚀 How it Works

The servo rotates the ultrasonic sensor to look left and right.

If an obstacle is detected close in front, it:

Moves backward slightly.

Looks to both sides.

Turns in the direction with more space.

If no obstacle is nearby, it moves forward.

🧠 Logic Flow (in loop)

If distance ≤ 15 cm:
  Stop
  Move Backward briefly
  Scan Left & Right
  Turn toward clearer side
Else:
  Move Forward

📹 Demo

(Add a YouTube link or attach a short GIF here showing your bot in action!)

🛠️ Future Improvements

Add IR sensors for line following.

Integrate Bluetooth or Wi-Fi (ESP8266) for remote control.

Obstacle memory with simple path planning.

