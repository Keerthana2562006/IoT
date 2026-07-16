# 📅 Day 01 - Introduction to Internet of Things (IoT) & Arduino

Welcome to **Day 01** of the **Summer Boot Camp - IoT**.

This session introduces the fundamentals of the Internet of Things (IoT), Arduino Uno, and the basic electronics required to build embedded systems and IoT applications.

---

# 🎯 Learning Objectives

- Understand the concept of IoT
- Learn how IoT works
- Explore IoT architecture
- Understand sensors and actuators
- Learn about embedded systems
- Get introduced to Arduino Uno
- Learn basic electronics
- Set up Arduino IDE
- Upload your first Arduino program

---

# 🌐 What is IoT?

The **Internet of Things (IoT)** is a network of physical devices connected to the internet that collect, exchange, and process data using sensors, software, and communication technologies.

### Examples
- Smart Home
- Smart Agriculture
- Smart Healthcare
- Smart Cities
- Industrial Automation
- Wearable Devices

---

# ⚙️ How IoT Works

```text
Sensors
   ↓
Arduino / ESP32
   ↓
Wi-Fi / Bluetooth / GSM
   ↓
Cloud Platform
   ↓
Mobile App / Dashboard
```

---

# 🏗 IoT Architecture

## 1. Perception Layer
- Sensors
- RFID
- Cameras
- Actuators

## 2. Network Layer
- Wi-Fi
- Bluetooth
- ZigBee
- GSM
- LoRa

## 3. Processing Layer
- Cloud Computing
- Databases
- AI & Machine Learning

## 4. Application Layer
- Smart Home
- Healthcare
- Agriculture
- Smart City
- Industry

---

# 🔌 Components of IoT

- Sensors
- Actuators
- Microcontroller
- Communication Module
- Cloud Services
- Mobile/Web Applications

---

# 🤖 Arduino Uno

Arduino Uno is an open-source microcontroller development board based on the **ATmega328P**.

## Specifications

| Feature | Value |
|---------|-------|
| Microcontroller | ATmega328P |
| Operating Voltage | 5V |
| Input Voltage | 7–12V |
| Digital I/O Pins | 14 |
| Analog Input Pins | 6 |
| PWM Pins | 6 |
| Flash Memory | 32 KB |
| SRAM | 2 KB |
| Clock Speed | 16 MHz |

---

# 📍 Arduino Pins

## Digital Pins
D0–D13 for digital input/output.

## Analog Pins
A0–A5 for analog input.

## PWM Pins
D3, D5, D6, D9, D10, D11.

## Power Pins
- 5V
- 3.3V
- GND
- VIN

---

# ⚡ Basic Electronics

## Voltage (V)
Electrical potential difference.

## Current (I)
Flow of electric charge.

## Resistance (R)
Opposes current flow.

### Ohm's Law

```text
V = I × R
```

---

# 🧰 Common Electronic Components

- LED
- Resistor
- Capacitor
- Breadboard
- Push Button
- Buzzer
- Potentiometer
- Jumper Wires
- Battery
- Switch

---

# 💻 Arduino IDE

1. Install Arduino IDE
2. Connect Arduino via USB
3. Select **Arduino Uno**
4. Select COM Port
5. Write code
6. Verify
7. Upload

---

# 💡 First Arduino Program

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  delay(1000);
}
```

---

# 🌍 Applications of IoT

- Smart Homes
- Smart Agriculture
- Healthcare
- Transportation
- Industrial Automation
- Environmental Monitoring
- Smart Energy
- Smart Retail

---

# 🚀 Future of IoT

- Artificial Intelligence (AI)
- Machine Learning (ML)
- Industry 4.0
- Smart Cities
- Autonomous Vehicles
- Robotics
- Edge Computing
- Digital Twins
- 5G & 6G Connectivity

---

# 📚 Day 01 Summary

- Introduction to IoT
- IoT Architecture
- IoT Components
- Sensors & Actuators
- Embedded Systems
- Arduino Uno
- Basic Electronics
- Arduino IDE
- First Arduino Program
- IoT Applications & Future

---

