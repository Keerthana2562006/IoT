# 💡 Sequential LED Blinking using Arduino Uno

A beginner-friendly Arduino project that demonstrates how to control **three LEDs** sequentially using digital output pins. This project introduces multiple GPIO pins, timing functions, and basic embedded programming concepts.

---

## 📌 Project Overview

In this project, three LEDs are connected to an Arduino Uno. The Arduino turns each LED ON for a fixed duration and then OFF before moving to the next LED, creating a simple sequential blinking effect.

---

## 🎯 Objectives

- Learn Arduino programming basics
- Understand digital output pins
- Control multiple LEDs
- Learn `pinMode()`, `digitalWrite()`, and `delay()`
- Practice basic embedded systems programming

---

## 🛠 Components Required

| Component | Quantity |
|-----------|:--------:|
| Arduino Uno | 1 |
| LED (Blue) | 1 |
| LED (Green) | 1 |
| LED (Red) | 1 |
| 220Ω Resistor | 3 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Arduino Pin | LED |
|--------------|-----|
| D13 | Blue LED |
| D12 | Green LED |
| D11 | Red LED |
| GND | All LED Cathodes |

> Connect a **220Ω resistor** in series with each LED.

---

## ⚙️ Working Principle

1. Blue LED turns ON for 5 seconds.
2. Blue LED turns OFF.
3. Green LED turns ON for 5 seconds.
4. Green LED turns OFF.
5. Red LED turns ON for 5 seconds.
6. Red LED turns OFF.
7. The sequence repeats continuously.

---

## 💻 Arduino Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);

  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);

  delay(5);
}
```

---

## ▶️ How to Run

1. Assemble the circuit.
2. Open Arduino IDE.
3. Select **Arduino Uno**.
4. Upload the code.
5. Observe the LEDs blinking one after another.

---

## 📂 Project Structure

```text
Sequential-LED-Blink/
│
├── README.md
├── Sequential_LED_Blink.ino
├── circuit_diagram.png
└── images/
```

---

## 📚 Learning Outcomes

- Arduino Programming
- LED Interfacing
- GPIO Pin Control
- Timing Functions
- Basic Embedded Systems

---

## 🌍 Applications

- Traffic Light Simulation
- Decorative Lighting
- Educational Demonstrations
- Status Indicators

---

## 🚀 Future Improvements

- Traffic Light Controller
- Push Button Control
- PWM Brightness Control
- Bluetooth LED Control

---

## 👥 Team Members

| Name | Role |
|------|------|
| **Keerthana** | Repository Owner |
| **Lakhan Singh** | Contributor |

---

## 📄 License

This project is developed for educational purposes as part of the **Summer Boot Camp – Internet of Things (IoT)**.

---

⭐ If you found this project useful, don't forget to **Star** this repository!
