

# Refreshmate: Automated Air Renewal and Freshener System for Public Toilets


## Overview
 🌬️ Introducing Refreshmate: Automated air renewal for public toilets. Gas sensors, microcontrollers, and a smart power mix tackle unpleasant odors, circulate fresh air, and add a pleasant aroma. Easy install, eco-friendly, optimized for performance. Completion accomplished for the Engineering Design Project in In21-S2-EN1190. 🚀

## Introduction:

- Refreshmate: Innovative project for automated air renewal and freshener in public toilets.
- Core components: Gas sensor, exhaust fan, and air freshener, powered by both electricity and batteries.
- Primary goal: Autonomously detect and eliminate unpleasant odors, improving air quality.
- Meticulous layout procedure: Careful component selection, testing, and systematic generation for optimal performance.
- Final product features: Easy installation, operation, and maintenance with minimal energy consumption, emphasizing environmental friendliness.

![Project Image](https://raw.githubusercontent.com/maduwanthasl/RefreshMate/main/Project%20images/Refreshmate%20project.png)

## How Rereshmate Works:

[Refreshmate Project Explain](https://github.com/maduwanthasl/RefreshMate/assets/107339150/9a8a3949-62f4-4360-bf2a-769d5a35e4b5)

**Modules:**
- We utilize three primary modules: the sensor module, the air freshener module, and the fan module.

**Gas Sensor Reading:**
- The gas sensor reads the air quality value in the restroom environment.

**ATTiny85 Processing:**
- The ATTiny85 microcontroller (in the sensor module) processes the data based on the air quality value.

**Data Transmission via HC-05 Bluetooth Module:**
- Using the HC-05 Bluetooth module, the processed data is transmitted to the air freshener and fan modules.

**ESP01 Module Data Processing:**
- The ESP01 modules in the air freshener and fan modules receive and process the transmitted data.

**Exhaust Fan Operation:**
- The exhaust fan is activated to expel dirty air rapidly in response to the processed data.

**Air Freshener Activation:**
- After a brief delay, the air freshener module is triggered, releasing a pleasant aroma into the restroom.

## Why I Chose These Components:

- Advanced Gas Sensing: Refreshmate employs a cutting-edge MQ135 gas sensor, swiftly identifying NH3 (ammonia) and demonstrating sensitivity to various other gases in the restroom environment. [Read datasheet](https://github.com/maduwanthasl/RefreshMate/blob/main/Datasheets/SNS-MQ135.pdf)
- Intelligent Microcontroller Control: The system strategically utilizes the compact ATTiny85 microcontroller for processing gas sensor data. The choice of ATTiny85, with its compact size and 8 pins, aligns seamlessly with project guidelines, allowing for a reduction in product size and cost. [Read datasheet](https://github.com/maduwanthasl/RefreshMate/blob/main/Datasheets/Atmel-2586-AVR-8-bit-Microcontroller-ATtiny25-ATtiny45-ATtiny85_Datasheet.pdf)
- Selection of ESP01 Module: To the air freshener module and fan module, the ESP01 Tiny Arduino-based module is seamlessly integrated. This compact and cost-effective module not only aligns with the project's space and budget considerations but also lays the foundation for future enhancements. The ESP01 facilitates the potential integration of server-based data transmission, allowing users to monitor and analyze air quality data remotely. Furthermore, the inclusion of WiFi capabilities opens the door to user-friendly features, enabling remote on/off control via WiFi, enhancing the overall accessibility and functionality of the Refreshmate system.[Read datasheet](https://github.com/maduwanthasl/RefreshMate/blob/main/Datasheets/esp01.pdf)
- Selection of HC-05 Bluetooth Module: I chose the HC-05 Bluetooth module for all modules due to its user-friendly attributes, including a small number of pins and ease of control.[Read datasheet](https://github.com/maduwanthasl/RefreshMate/blob/main/Datasheets/HC-05%20Datasheet.pdf)

## Block diagram of systems
![Block diagram](https://github.com/maduwanthasl/RefreshMate/blob/main/Block%20diagram/Main%20block%20daigram.png)

## Submodules, Circuits, and Tasks:

1. **Sensor Module:**
   - The sensor module is responsible for reading data from the environment to assess air quality.

2. **Air Freshener Module:**
   - Upon receiving data, the air freshener module activates with a slight delay. It adjusts the release of air freshener liquid based on the detected level of pollutants. Higher levels of pollutants trigger a stronger release of the air freshener.

3. **Fan Module:**
   - The fan module responds to received data by activating the fan. It adjusts the fan speed based on the detected level of pollutants. Higher levels of pollutants result in a higher fan speed, while lower levels lead to a slower fan speed.

## Hardware Specifications

| Component                | Specification              |
|--------------------------|-----------------------------|
| Gas Sensor               | MQ135                       |
| Exhaust Fan              | AC Cooling Fan 8025        |
| Air Freshener            | Airwick Air Freshener Spray 475ml |
| DC Power Supply          | 3.7V LiPo Batteries (x3) and 9V Batteries |
| AC Power Supply          | SMPS Power supply 12V |
| Bluetooth Modules        | HC-05 (x6)                  |
| Microcontroller          | ATTiny85                    |
| ESP Modules              | ESP01 (x2)                  |
| Motor                    | N/A                         |
| Relay Modules            | 9V Relay Modules (x2) ,Two chaneel relay module |
| Heat Sinks               | Heat Sinks (x4)             |
| Other Components         | Resistors, Capacitors, LEDs, Connecting Wires, Diodes, Plug Coverings, and more |




  
#### Refreshmate project explain : https://drive.google.com/file/d/1oDDOuYQFnANiH_yXHOmqUqlNW3DxZMKs/view?usp=sharing
