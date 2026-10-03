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

<img width="1863" height="1303" alt="Media" src="https://github.com/user-attachments/assets/57613b9f-f7f3-44ed-9fc1-96821d5d1f72" />
<img width="1856" height="1309" alt="Media (2)" src="https://github.com/user-attachments/assets/989ed7e6-5217-4db8-bac9-4c008bd2f286" />
<img width="1867" height="1300" alt="Media (1)" src="https://github.com/user-attachments/assets/dc70cb70-f2f4-4dce-95bb-fe79c2463125" />
