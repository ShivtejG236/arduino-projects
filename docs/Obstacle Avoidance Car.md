# 🤖 Obstacle Avoiding Car (Arduino + L293D)

This is an autonomous obstacle-avoiding robot car powered by an **Arduino Uno**, **L293D Motor Driver Shield**, **HC-SR04 Ultrasonic Sensor**, and a **Servo Motor**.

It scans for obstacles using the ultrasonic sensor mounted on a servo, decides the best direction, and maneuvers accordingly using four DC motors.

---

## 🔧 Components Used

| Component                 | Description                          |
|--------------------------|--------------------------------------|
| Arduino Uno              | Main microcontroller board           |
| L293D Motor Driver Shield| Controls 4 DC motors                 |
| HC-SR04 Ultrasonic Sensor| Detects obstacles in front           |
| Servo Motor (SG90)       | Rotates sensor to scan surroundings  |
| 4x DC Motors             | Drives the car                       |
| Power Supply (Battery)   | Powers the system                    |

---

## ⚡ Wiring Overview

| Arduino Pin (via Shield) | Connected To            |
|--------------------------|--------------------------|
| A0                       | Ultrasonic TRIG          |
| A1                       | Ultrasonic ECHO          |
| D9 (SERVO 1)             | Servo signal wire        |
| M1–M4                    | DC motors via L293D shield|

> **Note:** Servo is connected to **SERVO 1 port** on the L293D shield, which maps to **digital pin 9**.

---

## 📂 Libraries Required

Install these from the Arduino Library Manager:

- [`AFMotor`](https://github.com/adafruit/Adafruit-Motor-Shield-library) – Motor control
- [`NewPing`](https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home) – Reliable ultrasonic distance sensing
- `Servo` – Built-in with Arduino IDE

---

## 🚀 How It Works

1. Servo rotates the ultrasonic sensor to look left and right.
2. If an obstacle is detected in front:
   - Move backward briefly.
   - Scan both sides.
   - Turn toward the side with more clearance.
3. If path is clear, move forward.

---

## 🧠 Logic Flow

```text
If distance ≤ 15 cm:
  Stop
  Move Backward briefly
  Scan Left & Right
  Turn toward clearer side
Else:
  Move Forward
```

---

## 📸 Demo

> _(Add a YouTube link or GIF of the bot in action here)_

---

## 🛠️ Future Improvements

- Add IR sensors for line following
- Integrate Bluetooth/Wi-Fi (ESP8266) for remote control
- Implement obstacle memory or path planning

