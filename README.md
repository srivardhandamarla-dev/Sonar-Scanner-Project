# Sonar Scanner Project

An Arduino-based sonar scanner that uses an HC-SR04 ultrasonic sensor 
and a servo motor to detect nearby objects and display distance readings 
in real time via the Serial Monitor.

## 📌 How it works
- The ultrasonic sensor sends out a sound pulse and measures how long 
  it takes to bounce back
- Distance is calculated in both centimetres and inches
- If an object is detected within 6 inches, the servo motor activates

## 🛠️ What you need
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Breadboard + Jumper Wires

## 📍 Pin Connections
| Component | Pin |
|-----------|-----|
| Servo | Pin 7 |
| Trig | Pin 9 |
| Echo | Pin 10 |

## 🚀 How to build it
1. Clone or download this repo
2. Wire up components using the pin connections above
3. Open `sketch_mar21a.ino` in Arduino IDE
4. Install the `Servo` library via Tools → Manage Libraries
5. Upload to your Arduino Uno
6. Open Serial Monitor at 9600 baud to see live distance readings

## 📖 Open for everyone!
This project is completely free and open for anyone to use, learn from, 
and build upon. If you're learning Arduino or electronics, feel free to 
clone it, modify it, and make it your own!
