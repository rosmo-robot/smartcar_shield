# Smartcar shield 2.0

![Tests](https://github.com/platisd/smartcar_shield/workflows/Tests/badge.svg)
![Examples](https://github.com/platisd/smartcar_shield/workflows/Examples/badge.svg)
![Documentation](https://github.com/platisd/smartcar_shield/workflows/Documentation/badge.svg)
[![codecov](https://codecov.io/gh/platisd/smartcar_shield/branch/master/graph/badge.svg)](https://codecov.io/gh/platisd/smartcar_shield)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/466/badge)](https://bestpractices.coreinfrastructure.org/projects/466)
[![BCH compliance](https://bettercodehub.com/edge/badge/platisd/smartcar_shield?branch=master)](https://bettercodehub.com/)

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
 
 * Supporting variety of [Software](https://github.com/rosmo-robot/smartcar_shield#microcontrollers)
 * Mounting space for SBC; Pi,Jetson Nano, [AI-64](https://beagleboard.org/ai-64) or similar
 * Reference implimentation of Arduino / [Smartcar Library](https://github.com/rosmo-robot/smartcar_shield/blob/master/README.md#software)
 * Reference implimentation of [ROS2/Linorobot2](https://github.com/linorobot/linorobot2#linorobot2)
 * Use of [MicroMod MCU](https://www.sparkfun.com/micromod#processor_boards)
 * Support for the I2C/SPI [Featherwings](https://github.com/adafruit/awesome-feather#featherwings), including [Airlift](https://learn.adafruit.com/adafruit-airlift-featherwing-esp32-wifi-co-processor-featherwing/pinouts) 
 * Use of 4s LifePO4 or 3s Lipo batteries
 * Dual motor drivers for 4x4 mecanum drive
 * [UEXT sockets](https://www.olimex.com/Products/Modules/)
 * [mikroBUS socket](https://www.mikroe.com/mikrobus-shuttle-127mm-2x8-pin-box-header-smd-male)
 * Expanded I2C/ SPI connectors using [Breakout Garden](https://shop.pimoroni.com/collections/breakout-garden), [Qwiic](https://soldered.com/categories/easyc-2/)
 * Compatible with [Turtlebot mounting plates](https://craftcloud3d.com/configuration/4766265f-74b2-4e84-ae75-2e6df596f9b7)
 * Optional Mount plate for [affordable Lidar](https://github.com/n1kn4x/xv11_lidar_python#ros-2-driver-for-xv-11-lidar)


### Project Status

 * One developer interested in supporting [Arduino/Smartcar shield](https://github.com/platisd/smartcar_shield#software) 
 * One developer interested in supporting Python
 * One developer interested in [supporting ROS2](https://adityakamath.github.io/projects/)
 * PCB volunteer working on the project, motors board complete
 * [Kicad files in progress](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) created
 

The Rosmo project is working with a volunteer PCB designer to produce a first iteration of the Smartcar 2.0 robot. This involves the design and layout of two interconnected PCB's;

1) The 'Modules' board - Significant revision from v1 that you see above. See below for concept layouts & BOM

![Optional compute concept](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/modules.png)

2) the 'Motors' board - Additional motor driver to enable mecanum drive


![Dual driver concept](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/motors.png)

Longer term

- Offering an alternate/upgraded BLDC motor board using SimpleFOC, but re-using the 'Modules' board

We hope Smartcar 2.0 interesting to makers, schools and universities. We realise there's no such thing as a universal robot platform, and there are risks in trying to be all things to all people. We however drawn to seeing what's possible with modularity and testing the edges of interoperability.

### Smartcar 2.0 BOM (In development)

* 1 x [Modules board  TBC (rev.3)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) ~$15 
* 1 x [Motor board TBC(rev. 1)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) $5 bare PCB cost (no fab)
* 4 x [Brushed motors](https://www.aliexpress.com/item/32872592243.html) (530rpm @ 12V) ~$33
* 1 x [ESP32/ Teensy Micromod](https://www.sparkfun.com/micromod#processor_boards)~$17
* 4 x M6 (30mm) screws
* 4 x M6 nuts
* 16 x M3 (10mm) screws
* 16 x M3 nuts
* 2 x [HSP 02052 Front Bumper](https://www.aliexpress.com/item/32753903115.html)
* 2 x [40pin 2.54 pitch long male pin headers]()
* 1 x 4S [LifePO4 -recommended](https://www.pulsebattery.com/collections/all-batteries?page=1&rb_snize_facet1=4S%2014.8V%7C4S%2015.2V&rb_snize_facet4=1001-2000mAh%7C2001-3000mAh%7C3001-4000mAh) 105 x 33 x 25 or potentially dangerous 3S Lipo battery 135mm*42mm*25mm 304g [~$21 2200Mah](https://www.aliexpress.com/item/1005001419560964.html) > [~$38 4000Mah](https://www.aliexpress.com/item/1005004335619259.html) 135x42x21

### Optional sensors

* 4 x [VL45L0x ToF distance sensors](https://www.aliexpress.com/item/32828144370.html) (optional)
* - X ~$7 [MOD-MPU6050](https://www.olimex.com/Products/Modules/Sensors/MOD-MPU6050/open-source-hardware) Optional
* - X ~$15 [lsm303d](https://shop.pimoroni.com/products/lsm303d-6dof-motion-sensor-breakout) Optional
* - X ~$15 [MOD-MPU9150](https://learn.adafruit.com/adafruit-9-dof-orientation-imu-fusion-breakout-bno085?view=all) Optional
* - X [BNO-85 IMU](https://learn.adafruit.com/adafruit-9-dof-orientation-imu-fusion-breakout-bno085?view=all) Optional

Photos of [additional sensors & peripherals](https://github.com/rosmo-robot/smartcar_shield/blob/master/extras/Components/Img/readme.md) 
   
### Microcontrollers
The robot can have different microcontrollers inserted into the Micromod socket depending on the use case.

### Esp32 (Micromod)
- Used with [Smartcar Library](https://github.com/platisd/smartcar_shield#software)
- May also support [Microblocks](https://microblocks.fun/) 

Used as standalone devices for basic robot control, or connected to the GPIO of a Single Board Computer for more complex programing.

### Teensy (Micromod)

- Used for ROS2. Runs MicroROS. Connected to the USB of a Single board computer.

### Single Board Computers (SBC)

We intend to develop some scripts for setting up robotics software on commonly used Single Board Computers which can be added to the basic microcontroller based platform. The OS will be Ubuntu 22.04 LTS. 

The supported hardware may include; 

- Pi4
- Jetson Nano
- [Beaglebone Ai-64](https://beagleboard.org/ai-64) 
- [Radxa CM5](https://wiki.radxa.com/Rock5/CM) in a [carrier](https://github.com/dronecz/Minimal_carrier_board_for_CM4/tree/main/rev_C).

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

## License
MIT & CERN-OHL-P for Smartcar 2.0 hardware
