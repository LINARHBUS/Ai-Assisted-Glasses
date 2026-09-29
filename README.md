<div align="center">

# 👓 AI-Assisted Smart Glasses

### Empowering Safer & More Independent Mobility for Visually Impaired People

<p>
  <img src="https://img.shields.io/badge/ESP32--S3-Embedded-blue?style=for-the-badge&logo=espressif" />
  <img src="https://img.shields.io/badge/AI-Assisted-Technology-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/IoT-Project-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Accessibility-Innovation-purple?style=for-the-badge" />
</p>

### 🏆 Team ANKARA_MESSI

> **"Technology should reduce the effort required to understand the world."**

</div>

---

## 🌟 About the Project

**AI-Assisted Smart Glasses** is an affordable wearable assistive-technology project designed to help visually impaired individuals understand and navigate their surroundings more safely.

The prototype combines **ultrasonic sensing, an ESP32-S3 microcontroller, audio feedback, and expandable AI capabilities** to provide real-time environmental awareness.

Our goal is to develop a compact and accessible system that can eventually assist users with:

* 🚧 Obstacle detection
* 👤 Human and object recognition
* 📖 Text recognition and reading
* 🆘 Emergency assistance
* 📍 Navigation
* 🗣️ Voice-based interaction

---

# 🎯 The Problem

For visually impaired individuals, everyday navigation can involve challenges such as:

* Detecting obstacles in their path
* Understanding the surrounding environment
* Identifying objects or people
* Reading signs and printed information
* Getting assistance during emergencies
* Navigating unfamiliar locations

Traditional mobility aids provide valuable support, but modern embedded systems and AI can add additional layers of environmental awareness.

**Our project explores how affordable electronics and AI-assisted systems can contribute to this goal.**

---

# 💡 Our Solution

We designed a smart-glasses-based system that continuously monitors the user's surroundings and provides immediate feedback.

### Core Concept

```text
        🌎 SURROUNDINGS
              │
              ▼
      ┌─────────────────┐
      │ HC-SR04 Sensor  │
      │ Obstacle Sensing│
      └────────┬────────┘
               │
               ▼
      ┌─────────────────┐
      │    ESP32-S3     │
      │   Controller    │
      └────────┬────────┘
               │
               ▼
      ┌─────────────────┐
      │ Processing &    │
      │ Decision Logic  │
      └────────┬────────┘
               │
               ▼
      ┌─────────────────┐
      │ Audio / Voice   │
      │ Feedback        │
      └────────┬────────┘
               │
               ▼
          👨‍🦯 USER
```

---

# ✨ Key Features

| Feature                             | Description                                              |
| ----------------------------------- | -------------------------------------------------------- |
| 🚧 **Real-Time Obstacle Detection** | Detects nearby obstacles using ultrasonic sensing        |
| 🔊 **Audio Alerts**                 | Provides immediate feedback when an obstacle is detected |
| 🧠 **AI-Ready Architecture**        | Designed to support future AI-based capabilities         |
| ⚡ **ESP32-S3 Powered**              | Compact and efficient embedded processing                |
| 🪶 **Portable Design**              | Designed around a wearable glasses form factor           |
| 💰 **Low-Cost Approach**            | Uses affordable and easily available components          |
| 🆘 **Emergency Button**             | Dedicated interface for future SOS functionality         |
| 📖 **Voice/Reading Button**         | Interface for future text-reading functionality          |
| 👁️ **Object Detection Button**     | Interface for future AI vision functionality             |

---

# 🔧 Hardware Components

| Component                      | Function                        |
| ------------------------------ | ------------------------------- |
| **ESP32-S3 Development Board** | Main processing controller      |
| **HC-SR04 Ultrasonic Sensor**  | Distance and obstacle detection |
| **Buzzer / Speaker**           | Audio feedback                  |
| 🟢 **Green Push Button**       | Voice / reading function        |
| 🟡 **Yellow Push Button**      | Object detection function       |
| 🔴 **Red Push Button**         | SOS / emergency function        |
| 🟢 **Green LED**               | Safe/status indication          |
| 🔴 **Red LED**                 | Warning indication              |
| **Resistors**                  | Current limiting                |
| **Jumper Wires**               | Circuit connections             |
| **Smart Glasses Frame**        | Wearable platform               |

---

# ⚙️ How It Works

### 01 — Environmental Sensing

The **HC-SR04 ultrasonic sensor** continuously measures the distance between the glasses and nearby objects.

### 02 — Data Processing

The sensor data is transferred to the **ESP32-S3**, which processes the distance information.

### 03 — Obstacle Analysis

The controller determines whether an object is within the defined safety range.

### 04 — User Alert

When an obstacle is detected, the system provides an **audio warning** through the buzzer or speaker.

### 05 — Expandable AI Functions

Dedicated buttons provide an interface for future features such as **object recognition, text reading, and emergency assistance**.

---

# 🧠 AI & Future Architecture

The current prototype focuses on **obstacle detection and embedded control**.

The architecture is intentionally designed so that future versions can integrate additional AI capabilities.

```text
                 SMART GLASSES
                      │
          ┌───────────┴───────────┐
          │                       │
     Distance Sensor          Camera
          │                       │
          ▼                       ▼
      ESP32-S3              AI Processing
          │                       │
          └───────────┬───────────┘
                      │
                      ▼
              Decision System
                      │
          ┌───────────┼───────────┐
          ▼           ▼           ▼
       Audio       Voice        SOS
       Alerts    Assistance    System
```

---

# 🚀 Future Development

Our future roadmap includes:

### 👁️ Computer Vision

* Camera-based object detection
* Human detection
* Scene understanding

### 📖 Accessibility

* OCR-based text recognition
* Text-to-speech
* Sign and document reading

### 🧭 Navigation

* GPS integration
* Turn-by-turn navigation
* Location awareness

### 🆘 Safety

* Emergency calling
* SOS location sharing
* Family/caregiver notifications

### 📱 Connectivity

* Mobile application
* Bluetooth connectivity
* Cloud-based services

### 🧠 AI Assistant

* Voice interaction
* Environmental descriptions
* Context-aware assistance

---

# 📊 Project Objectives

Our project aims to:

* ♿ Improve accessibility and independent mobility
* 🛡️ Increase environmental awareness
* 💰 Explore affordable assistive technology
* 🧠 Combine embedded systems with AI
* 🔧 Build a scalable hardware platform
* 🌍 Promote inclusive technological innovation

---

# 🛠️ Technology Stack

```text
Hardware
├── ESP32-S3
├── HC-SR04 Ultrasonic Sensor
├── LEDs
├── Push Buttons
├── Buzzer / Speaker
└── Wearable Glasses Frame

Software
├── Embedded C / C++
├── ESP32 Development Environment
├── Sensor Processing
└── AI-Assistance Logic

Future Technologies
├── Computer Vision
├── OCR
├── Text-to-Speech
├── GPS
├── Mobile Application
└── Cloud Connectivity
```

---

# 📸 Prototype

> Add your actual prototype photographs here to showcase the hardware, circuit, and wearable design.

### Suggested GitHub media

```text
📷 Prototype
📷 Circuit
📷 Smart Glasses
📷 Team
📷 Testing
📷 Demonstration
```

---

# 🎥 Project Demonstration

<div align="center">

### ▶️ Watch Our Project in Action

[**YouTube Demonstration →**](https://youtu.be/IW8YUez6ShY?si=Lp0alK3IdML-fthC)

</div>

---

# 👥 Team ANKARA_MESSI

| Team Member               |
| ------------------------- |
| **Subhranil Barman**      |
| **Arka Bhakta**           |
| **Sudiksha Pal**          |
| **Sarbarthadip Dasgupta** |
| **Piyush Das**            |

### 🤝 Team Focus

**Embedded Systems • IoT • AI • Accessibility • Innovation**

---

# 🌍 Applications

The technology can potentially be adapted for:

* 👨‍🦯 Visually impaired individuals
* 🏥 Healthcare and rehabilitation organizations
* 👨‍👩‍👧 Family and caregiver assistance
* ♿ Accessibility programs
* 🏫 Educational and research projects
* 🧪 Assistive-technology research

---

# 🔮 Vision

We believe technology can make the world more understandable and accessible.

Our long-term vision is to evolve this prototype into a **compact AI-powered wearable assistant** capable of understanding the user's environment and communicating useful information through natural audio interaction.

> ### **See More. Understand More. Move More Independently.**

---

<div align="center">

## 💙 Accessibility Through Innovation

### Built with curiosity, engineering & teamwork by

# **TEAM ANKARA_MESSI**

⭐ **If you find this project interesting, consider giving the repository a star!**

</div>
