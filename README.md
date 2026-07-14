# Solar Tracker using Arduino

A single-axis solar tracking system developed using Arduino UNO, two LDR sensors, an SG90 servo motor, and a custom 3D-printed frame.

## Features

- Real-time light tracking using two LDR sensors.
- Threshold-based control algorithm for stable tracking.
- Single-axis solar panel rotation using an SG90 servo motor.
- Custom 3D-printed mechanical design.
- Physical implementation and testing.

## Repository Contents

- Arduino source code (`solar_tracker.ino`)
- 3D model files (`3D Model Files.zip`)
- Project documentation (`README.md`)

## Hardware Used

- Arduino UNO
- SG90 Servo Motor
- Two LDR Sensors
- 10kΩ Resistors
- Breadboard and Jumper Wires
- Solar Panel
- Custom 3D-Printed Frame

## Control Algorithm

The Arduino program continuously:

1. Reads the light intensity values from both LDR sensors.
2. Calculates the difference between the sensor readings.
3. Compares the difference against a predefined error threshold.
4. Rotates the servo motor toward the brighter light source.
5. Updates the panel position in real time while avoiding unnecessary movements.

## Author

Feras Al-mahre
