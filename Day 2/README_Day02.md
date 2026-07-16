# 📅 Day 02 - Sensors, Arduino IDE & LED Basics

Welcome to **Day 02** of the **Summer Boot Camp - IoT**.

Today's session introduces **Sensors**, their types, the **Arduino IDE**, Arduino programming basics, and LED interfacing.

---

# 🎯 Learning Objectives

- Understand what a sensor is
- Learn different types of sensors
- Explore Arduino IDE
- Learn Arduino programming basics
- Understand LEDs and their working
- Write and upload your first LED program

---

# 🌡️ What is a Sensor?

A **sensor** is an electronic device that detects changes in the environment and converts them into electrical signals.

Examples:
- Temperature
- Light
- Motion
- Distance
- Gas
- Humidity

---

# 📂 Types of Sensors

## 1. Temperature Sensor
Measures temperature.
- LM35
- DHT11
- DHT22

## 2. Light Sensor
Measures light intensity.
- LDR

## 3. Distance Sensor
Measures object distance.
- HC-SR04 Ultrasonic Sensor

## 4. Motion Sensor
Detects movement.
- PIR Sensor

## 5. IR Sensor
Detects objects and line tracking.

## 6. Gas Sensor
Detects harmful gases.
- MQ-2
- MQ-135

## 7. Humidity Sensor
Measures humidity.
- DHT11
- DHT22

## 8. Soil Moisture Sensor
Measures soil water content.

---

# ⚙️ Analog vs Digital Sensors

| Analog Sensor | Digital Sensor |
|--------------|----------------|
| Continuous values | HIGH or LOW |
| Connected to Analog Pins | Connected to Digital Pins |
| Example: LM35 | Example: IR Sensor |

---

# 💻 Arduino IDE

The **Arduino IDE** is software used to write, compile, and upload programs to Arduino boards.

### Main Features

- Code Editor
- Verify (Compile)
- Upload
- Serial Monitor
- Serial Plotter
- Library Manager
- Board Manager

---

# 🛠 Arduino IDE Setup

1. Install Arduino IDE
2. Connect Arduino Uno via USB
3. Select **Board → Arduino Uno**
4. Select the correct COM Port
5. Write the program
6. Click **Verify**
7. Click **Upload**

---

# 🤖 Arduino Basics

## Structure of an Arduino Program

```cpp
void setup()
{
    // Runs once
}

void loop()
{
    // Runs continuously
}
```

### Common Functions

- `pinMode()`
- `digitalWrite()`
- `digitalRead()`
- `analogRead()`
- `analogWrite()`
- `delay()`

---

# 💡 LED Basics

An **LED (Light Emitting Diode)** is an electronic component that emits light when current flows through it.

### LED Pins

- Long Leg → Anode (+)
- Short Leg → Cathode (-)

### Why Use a Resistor?

A **220Ω–330Ω resistor** limits current and protects the LED from damage.

---

# 🔌 LED Connection

| LED Pin | Arduino |
|---------|----------|
| Anode (+) | Digital Pin 13 (through resistor) |
| Cathode (-) | GND |

---

# 💻 LED Blink Program

```cpp
void setup()
{
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    delay(1000);

    digitalWrite(13, LOW);
    delay(1000);
}
```

---

# 📝 Applications

- Smart Home Automation
- Weather Monitoring
- Security Systems
- Industrial Automation
- Smart Agriculture
- Robotics

---

# 📚 Day 02 Summary

✅ What is a Sensor?

✅ Types of Sensors

✅ Analog vs Digital Sensors

✅ Arduino IDE

✅ Arduino Program Structure

✅ LED Basics

✅ LED Circuit

✅ LED Blink Program

---
