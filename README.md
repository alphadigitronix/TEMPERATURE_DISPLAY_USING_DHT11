# 🌡️ Temperature Display Using DHT11 & Arduino UNO

## 📌 Project Overview

This project demonstrates how to measure **temperature and humidity** using a **DHT11 Temperature and Humidity Sensor** with an **Arduino UNO**.

The Arduino reads environmental data from the DHT11 sensor and displays the temperature in **degrees Celsius (°C)** and humidity in **percentage (%)** on the Arduino IDE **Serial Monitor**.

This beginner-friendly project introduces digital environmental sensors and forms the foundation for weather stations, smart agriculture, room monitoring, and IoT systems.

---

## 🎯 Objective

- Measure temperature using the DHT11 sensor.
- Measure relative humidity.
- Interface the DHT11 with Arduino UNO.
- Display temperature and humidity on the Serial Monitor.
- Learn how digital environmental sensors communicate with Arduino.

---

## 🧰 Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| DHT11 Sensor Module | 1 |
| Jumper Wires | 3 |
| USB Cable | 1 |

---

## 🔍 DHT11 Sensor Module Pins

A typical **3-pin DHT11 module** contains:

| DHT11 Pin | Function |
|---|---|
| VCC | Power Supply |
| DATA / OUT | Digital Data Output |
| GND | Ground |

> Some standalone DHT11 sensors have 4 pins instead of 3. This project assumes a **3-pin DHT11 sensor module**.

---

## 🔌 Circuit Connections

| DHT11 Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| DATA / OUT | Digital Pin 2 |
| GND | GND |

### Connection Summary

```text
DHT11 SENSOR MODULE              ARDUINO UNO
┌─────────────────┐             ┌───────────────┐
│             VCC ├────────────►│ 5V            │
│            DATA ├────────────►│ D2            │
│             GND ├────────────►│ GND           │
└─────────────────┘             └───────────────┘
```

---

## ⚙️ Working Principle

The **DHT11** is a digital temperature and humidity sensor.

It contains a humidity sensing element, a temperature sensing element, and internal electronics that convert the measurements into digital data.

The Arduino UNO communicates with the DHT11 through its **DATA pin connected to Digital Pin 2**.

The Arduino periodically requests data from the sensor.

The DHT11 returns:

- Temperature in °C
- Relative Humidity in %

The Arduino then displays these values on the Serial Monitor.

---

## 📚 Required Arduino Library

This project uses the **DHT Sensor Library by Adafruit**.

In Arduino IDE:

```text
Sketch
   ↓
Include Library
   ↓
Manage Libraries
   ↓
Search: DHT sensor library
   ↓
Install "DHT sensor library" by Adafruit
```

If prompted, also install:

**Adafruit Unified Sensor**

---

## 🔄 Project Flow

```text
START
  ↓
Initialize Serial Monitor
  ↓
Initialize DHT11 Sensor
  ↓
Read Temperature
  ↓
Read Humidity
  ↓
Check Sensor Reading
  ↓
 ┌─────────────────┐
 │ Reading Valid ? │
 └────────┬────────┘
          │
     ┌────┴────┐
    YES        NO
     ↓          ↓
 Display      Display
Temperature   Sensor Error
& Humidity
     │          │
     └────┬─────┘
          ↓
       Wait
          ↓
     Read Again
```

---

## 🖥️ Expected Serial Monitor Output

Example:

```text
Temperature: 29.00 °C | Humidity: 68.00 %
Temperature: 29.00 °C | Humidity: 67.00 %
Temperature: 30.00 °C | Humidity: 66.00 %
```

If the sensor cannot be read:

```text
Failed to read from DHT11 sensor!
```

---

## 🧪 Testing the Project

1. Connect the DHT11 sensor module to the Arduino UNO.
2. Connect the Arduino UNO to your computer.
3. Open Arduino IDE.
4. Install the required DHT library.
5. Open `TEMPERATURE_DISPLAY_USING_DHT11.ino`.
6. Select **Arduino UNO** as the board.
7. Select the correct COM port.
8. Upload the program.
9. Open the **Serial Monitor**.
10. Set the baud rate to **9600**.
11. Observe the temperature and humidity readings.

---

## ⚠️ Important Notes

- Verify the pin labels printed on your specific DHT11 module before wiring it.
- Do not reverse the VCC and GND connections.
- DHT11 is intended for basic environmental monitoring rather than precision measurement.
- Allow sufficient time between sensor readings.
- If the sensor repeatedly returns errors, check the wiring and installed libraries.

---

## 📚 What You Will Learn

- Arduino UNO sensor interfacing
- Temperature measurement
- Humidity measurement
- Digital sensors
- Arduino libraries
- Serial communication
- Environmental monitoring
- Basic sensor troubleshooting

---

## 🚀 Applications

This project can be extended into:

- Digital Weather Station
- Room Temperature Monitor
- Smart Agriculture System
- Greenhouse Monitoring
- Temperature Alert System
- Home Automation
- IoT Environmental Monitoring
- Automatic Fan Controller

---

## 👨‍💻 Developed By

**Alpha Digitronix Solutions**

**THINK • BUILD • INNOVATE**
