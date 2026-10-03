# 🚦 Traffic Light with Arduino

> 🚥 My first multi-LED Arduino project!

A simple traffic light system built with an **Arduino Uno** and three LEDs.
This was my first project where I controlled multiple LEDs independently and made them follow a sequence. 🎉

## 🛠️ Components

- 🟢 Green LED
- 🔵 Blue LED
- 🔴 Red LED
- 🔌 Arduino Uno
- 🧱 Breadboard
- 🪢 Jumper wires
- 🛡️ 3 × Resistors

## 🔌 Pin Connections

| 💡 LED | 📍 Arduino Pin |
|--------|----------------|
| 🔵 Blue | 13 |
| 🟢 Green | 12 |
| 🔴 Red | 8 |

## ⚙️ How It Works

The Arduino turns the LEDs on and off in sequence using digital output pins.

```text
🔵 ON  →  🟢 ON  →  🔴 ON
  ↓        ↓        ↓
  ⏱️       ⏱️       ⏱️
