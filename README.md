# Temperature and Humidity Monitoring System using Arduino Nano & DHT11

## Overview

This project is a **real-time Temperature and Humidity Monitoring System** built using **Arduino Nano** and **DHT11 sensor**.
It measures environmental conditions and displays them on a **16x2 LCD display**.
This system is simple, low-cost, and useful for applications like weather monitoring, smart homes, and industrial environments.

---

## Features

* Real-time temperature monitoring
* Humidity measurement
* LCD display output
* Low-cost and efficient system
* Continuous data updates every 2 seconds

---

## Components Used

* Arduino Nano
* DHT11 Temperature & Humidity Sensor
* 16x2 LCD Display (I2C)
* Breadboard
* Jumper Wires
* USB Cable

---

## Working

The system works by sensing environmental conditions and displaying them in real time.

- The DHT11 sensor continuously measures the surrounding temperature and humidity.
- It converts these physical values into digital signals.
- The Arduino Nano reads this data from the sensor through a digital input pin.
- The microcontroller processes the received data and checks for valid readings.
- The processed temperature and humidity values are sent to the 16x2 LCD display.
- The LCD displays temperature in degree Celsius (°C) and humidity in percentage (%).
- The readings are updated every 2 seconds, providing real-time monitoring.

This system provides a simple, low-cost, and efficient way to monitor environmental conditions.

---

## Circuit Connections

* DHT11 VCC → 5V

* DHT11 GND → GND

* DHT11 Data → D7

* LCD VCC → 5V

* LCD GND → GND

* LCD SDA → A4

* LCD SCL → A5

---

## Code

The Arduino code is included in this repository

---

## Project Images
```
The LCD displays:

* Temperature in °C
* Humidity in %
```
This image shows the complete working steup of Arduino Nano with DHT11 Sensor and LCD display

![Output](images/Picture1.jpg)
---

## Future Improvements

* Add IoT support for remote monitoring
* Mobile app connectivity
* Data logging and analytics
* Alert system for high temperature

---

## Author

**Khushi Bhagat**

---
