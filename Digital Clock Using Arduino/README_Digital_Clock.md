# ⏰ Digital Clock using Arduino Uno & DS1307 RTC

A simple IoT project that displays the current **time and date** on a **16×2 I2C LCD** using the **DS1307 Real-Time Clock (RTC)** module and **Arduino Uno**.

---

## 📌 Project Overview

The DS1307 RTC module keeps track of the current time even when the Arduino is powered off using its backup battery. Arduino reads the RTC data through the I2C protocol and displays it on the LCD.

---

# 🎯 Objectives

- Learn RTC module interfacing
- Understand I2C communication
- Display real-time clock on LCD
- Learn Arduino library usage
- Build a practical embedded systems project

---

# 🛠 Components Required

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| DS1307 RTC Module | 1 |
| 16×2 I2C LCD | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 📚 Libraries

- RTClib
- LiquidCrystal I2C

Install both libraries using the Arduino IDE Library Manager.

---

# 🔌 Circuit Connections

## DS1307 RTC

| RTC Pin | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

## 16×2 I2C LCD

| LCD Pin | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# ⚙️ Working Principle

1. RTC stores the current date and time.
2. Arduino reads the RTC through I2C.
3. Time and date are displayed on the LCD.
4. The RTC backup battery maintains the correct time during power loss.

---

# 📂 Project Structure

```text
Digital-Clock/
│
├── README.md
├── DigitalClock.ino
├── circuit_diagram.png
└── images/
```

---

# ▶️ How to Run

1. Connect the hardware.
2. Install the required libraries.
3. Open the Arduino IDE.
4. Select **Arduino Uno** and the correct COM port.
5. Upload the sketch.
6. Observe the current date and time on the LCD.

---

# 📷 Circuit Diagram

Save your circuit image as:

```text
circuit_diagram.png
```

Display it in the README:

```markdown
![Circuit Diagram](circuit_diagram.png)
```

---

# 🌟 Applications

- Digital Clock
- School & College Projects
- Home Automation
- Attendance Systems
- Time Logging Devices

---

# 🚀 Future Improvements

- Alarm Clock
- Temperature Display
- Wi-Fi Time Synchronization
- Bluetooth Control
- 12/24-Hour Format Selection

---

# 👥 Team Members

| Name | Role |
|------|------|
| **Keerthana** | Repository Owner |
| **Lakhan Singh** | Contributor |

---

# 📄 License

This project is created for educational purposes as part of the **Summer Boot Camp - IoT**.

---

⭐ If you like this project, give the repository a **Star**!
