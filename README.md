# Smart Home Management System

## Overview

Welcome to the Smart Home Management System, an automated home solution designed to enhance your living experience by leveraging advanced sensor technologies. This project utilizes auto SAR layers model to create a secure, comfortable, and energy-efficient living environment. The system incorporates various sensors, including temperature sensors, LDR sensors, Flame sensors, PIR sensors, and Gas sensors, to make informed decisions based on their readings.

## Getting Started

To start using the Smart Home Management System, follow these steps:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Run the main application file.

## Security

The system prioritizes security by implementing a password-based authentication mechanism. Upon initiation, the user is prompted to enter a password. After three unsuccessful attempts, the system will lock for added security.

## Environmental Control

### Temperature Management

The system monitors the temperature and adjusts the air conditioner speed accordingly:

- Below 20 degrees Celsius: Air conditioner off.
- 20 to 24 degrees Celsius: First speed activated.
- 25 to 34 degrees Celsius: Second speed activated.
- Above 35 degrees Celsius: Third speed activated.

### Light Management

The system controls the home lamp based on the percentage of light:

- Light >= 50%: Lamp off.
- Light < 50%: Lamp on.

## Sensor-based Automation

### Motion Sensor (PIR)

The system activates an outdoor lamp based on the PIR sensor reading.

### Flame Sensor

A warning system is triggered based on the flame sensor reading, indicating a fire inside the home.

### Gas Sensor

A warning system is activated if the gas sensor detects a high percentage of harmful gas within the house.

## Proteus Simulation

![image](https://github.com/ahmedali724/Smart-Home/assets/111287464/19c8985d-c0f6-495e-b4b0-6d24d3b202b3)

The Proteus simulation screenshot above illustrates the virtual environment where the Smart Home Management System is tested and validated. This simulation provides a comprehensive view of how the system interacts with different sensors and controls.

## Features

- **Digital Locker System**: Enhance security with a digital locker for your home.
- **Automatic Air Conditioner Control**: Enjoy optimal temperature control based on environmental conditions.
- **Automatic Lamp Control**: Efficiently manage lighting based on ambient light levels.
- **Automatic Warning System**: Receive alerts for harmful gas detection and fire incidents.
