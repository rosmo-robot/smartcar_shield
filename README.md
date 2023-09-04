# Smartcar shield 2.0

![Tests](https://github.com/platisd/smartcar_shield/workflows/Tests/badge.svg)
![Examples](https://github.com/platisd/smartcar_shield/workflows/Examples/badge.svg)
![Documentation](https://github.com/platisd/smartcar_shield/workflows/Documentation/badge.svg)
[![codecov](https://codecov.io/gh/platisd/smartcar_shield/branch/master/graph/badge.svg)](https://codecov.io/gh/platisd/smartcar_shield)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/466/badge)](https://bestpractices.coreinfrastructure.org/projects/466)

A versatile and easy to use vehicle platform for hobby & Academic projects

- [Smartcar 1.0](#smartcar-10-current)
- [Smartcar 2.0](#Proposed-Smartcar-2.0-development)
- [Microcontrollers](#Microcontrollers)
- [Single Board Computers](#Single-Board-Computers (SBC))
- [License](#license)

## Description
This repository, includes everything necessary to set up a Smartcar 2.0.
The Smartcar, is a vehicular educational platform, which enables the user to develop various robotic applications in an affordable, pedagogic and easy way. It is intended to be accessible for persons with basic programming knowledge and little to no experience of electronics. It additionally supports the needs of more experienced users.

### Smartcar 1.0 (Existing)

![smartcar platform](https://i.imgur.com/cFrq2Wj.jpg)

The existing Smartcar platform is a complete hardware solution for your hobby-grade, connected vehicle project.
It is comprised of the chassis, made out of printed circuit boards, stacked on each other and an
ESP32 development board that drives the motors, controls the sensors and communicates with the
world via WiFi and Bluetooth.

There are 4 motors with directional odometers which enable not only to determine how much the
wheels have moved but also the direction they spin. See [Smartcar 1.0 documentation](https://github.com/platisd/smartcar_shield#smartcar-shield)

The Smartcar 2.0 project is a redesign of the hardware, retaining software compatibility with the orginal platform, but adding additional hardware interfaces and additional supported software.

![Platform V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/smart.jpg)

![Motors V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/encoders.jpg)

![Driver V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/driver.jpg)

## Smartcar 2.0 (In development)

Licence: CERN-OHL-P

 Features;
 
 * Mounting space for SBC; Beagle AI64, Play, Pi, Jetson Nano, etc 
 * Reference implimentation of Arduino / [Smartcar Library](https://github.com/rosmo-robot/smartcar_shield/blob/master/README.md#software)
 * Reference implimentation of [ROS2/Linorobot2](https://github.com/hippo5329/linorobot2_hardware)
 * Use of 4s LifePO4 or 3s Lipo batteries
 * Dual motor drivers for 4x4 & optional [mecanum drive](https://community.robotshop.com/forum/t/nema-17-mecanum-wheels/55901)
 * [mikroBUS socket](https://www.mikroe.com/mikrobus-shuttle-127mm-2x8-pin-box-header-smd-male)
 * Expanded I2C/ SPI connectors using [Breakout Garden](https://shop.pimoroni.com/collections/breakout-garden), [Qwiic](https://soldered.com/categories/easyc-2/)


### Project Status

 * Motor board ordered
 * Design review on Pico board
 * [control board files in progress](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) created
 


![Dual driver concept](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/motors.png)

We hope Smartcar 2.0 interesting to makers, schools and universities. We realise there's no such thing as a universal robot platform, and there are risks in trying to be all things to all people. We however drawn to seeing what's possible with modularity and testing the edges of interoperability.

### Smartcar 2.0 BOM (In development)

* 1 x [Modules board  TBC (rev.3)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) ~$15 
* 1 x [Motor board TBC(rev. 1)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) $5 bare PCB cost (no fab)
* 2 X Onboard TB6612FNG motor drivers
* 4 x [Brushed motors](https://www.aliexpress.com/item/1005004242997257.html) (530rpm @ 12V) ~$33
* 1 x [Olimex Pico](https://www.olimex.com/Products/MicroPython/RP2040-PICO30/open-source-hardware)
* 4 x M6 (30mm) screws
* 4 x M6 nuts
* 16 x M3 (10mm) screws
* 16 x M3 nuts
* 2 x [40pin 2.54 pitch long male pin headers]()
* 1 x 3S [LifePO4 -recommended](https://www.pulsebattery.com/pages/search-results-page?q=lifePO4%203s) 105 x 33 x 25 or potentially dangerous 3S Lipo battery 135mm*42mm*25mm 304g [~$21 2200Mah](https://www.aliexpress.com/item/1005001419560964.html) > [~$38 4000Mah](https://www.aliexpress.com/item/1005004335619259.html) 135x42x21
* 2 x [Front Bumper](https://www.aliexpress.com/item/1005005024927428.html)


### Optional add ons

* - x [VL45L0x ToF distance sensors](https://shop.pimoroni.com/collections/breakout-garden?tags=Robotics) (optional)
* - X [BNO-85 IMU](https://learn.adafruit.com/adafruit-9-dof-orientation-imu-fusion-breakout-bno085?view=all) (Optional)
* - X [Servo controller](https://www.tindie.com/products/alexchu/zio-16-servo-controller-qwiic/)
* - X [line follower board](https://www.smart-prototyping.com/Zio-Line-Finder-Qwiic-4-Transceivers)
* - X [SPI or I2C Click boards](https://www.mikroe.com/click?interface*=spi,i2c,spi,i2c)
* - Whatever you can bolt to your compute module and get ROS2 to understand, eg Lidar

Photos of [additional sensors & peripherals](https://github.com/rosmo-robot/smartcar_shield/blob/master/extras/Components/Img/readme.md) 
   

### Optional alternative Microcontroller Esp32 S3 (Waveshare)
- Used with [Smartcar Library](https://github.com/platisd/smartcar_shield#software)
- [Linorobot 2 via wifi transport](https://github.com/hippo5329/linorobot2_hardware)
- May also support [Microblocks](https://microblocks.fun/) 


### Single Board Computers (SBC)

We intend to develop some scripts for setting up robotics software on commonly used Single Board Computers which can be added to the basic microcontroller based platform. The OS will be Ubuntu 22.04 LTS. 

The supported hardware may include; 
- [Yuzuki chameleon (OSHW)](https://github.com/YuzukiHD/YuzukiChameleon)
- [Beaglebone Play](https://www.beagleboard.org/boards/beagleplay)
- [Beaglebone Ai-64 (OSHW)](https://beagleboard.org/ai-64) 

Installed software may include

 - Block editor code (TBC)
 - [Pyrobots](https://www.csc.liv.ac.uk/~lad/pyrobots/exercises.html) configuration script
 - [Python app providing a Webui for teleop](https://github.com/DIT112-V19/group-03) Pi GPIO > Micromod.  
 - [Python Robotics](https://github.com/AtsushiSakai/PythonRobotics) Pi GPIO > Micromod
 - [ROS2/Linorobot2](https://github.com/linorobot/linorobot2#linorobot2) USB > Micromod
 - [Rosboard](https://github.com/dheera/rosboard#rosboard) USB > Micromod
 - [Visual circuit](https://github.com/JdeRobot/VisualCircuit#visual-circuit) USB > Micromod
  - [LGPIO](https://ubuntu.com/tutorials/gpio-on-raspberry-pi#1-overview) & [script to set up GPIO](http://4tronix.co.uk/pi2go2/ipd03.py)
 - [Wetty](https://github.com/butlerx/wetty) with [Kaa](http://kaaedit.github.io/)
 - Some demo computer vision code

Linorobot:
![Linorobot2](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/ROS2.png)

### BLDC Version
- Offering an alternate/upgraded BLDC motor board using SimpleFOC, but re-using the 'Modules' board
- Perhaps using [Nema17 BLDC](https://www.omc-stepperonline.com/brushless-dc-motor?mfp=184-frame-size-mm[Nema%2017%20(42%20x%2042)]) to give access to [brackets](https://www.omc-stepperonline.com/nema-17-bracket-for-stepper-motor-and-geared-stepper-motor-alloy-steel-bracket-st-m1) & [gearboxes](https://www.aliexpress.com/premium/nema-17-gearbox.html)

### Minimal functionality

- ESP32 broadcasts wifi car webpage & you can drive it around.
- ESP32 communicates with TB6612FNG drivers

Or 

- RP2040 communicates with a ESP8266 which broadasts a  wifi network
- RP2040 provides a car webpage & you can drive it around.
- RP2040 communicates with TB6612FNG drivers

### Pre-ROS Brushed motor functionality 
- SBC runs Python
- SBC connected to ESP32/ Teensy/ RP2040 over SPI via 7pin header
- ESP32/Teensy/RP2040 communicates with TB6612FNG drivers

### Maximum ROS2 functionality

- Jetson Onyx in carrier doing complex vision stuff & Lidar
- ROS2 USB connection to Teensy Micromod 
- Teensy MicroMod runs Smartcar shield + MicroROS on top. 
- Teensy MicroMod takes input from several I2C sensors
- Teensy communicates with STMxx on SimpleFOC board over CAN or SPI
- STMxx on motors board is handling the magnetic encoders and complex SimpleFOC stuff

### License
MIT & CERN-OHL-P for Smartcar 2.0 hardware
