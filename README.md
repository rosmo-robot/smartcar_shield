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
 
 * Supporting variety of [Software](https://rosmo-robot.github.io/learn-robotics/)
 * Mounting space for Pi,Jetson Nano, [AI-64](https://beagleboard.org/ai-64) or similar
 * Reference implimentation of Arduino / [Smartcar Library](https://github.com/rosmo-robot/smartcar_shield/blob/master/README.md#software)
 * Reference implimentation of [ROS2/Linorobot2](https://github.com/linorobot/linorobot2#linorobot2)
 * Use of [MicroMod MCU](https://www.sparkfun.com/micromod#processor_boards)
 * Support for the I2C/SPI [Featherwings](https://github.com/adafruit/awesome-feather#featherwings), including [Airlift](https://learn.adafruit.com/adafruit-airlift-featherwing-esp32-wifi-co-processor-featherwing/pinouts) 
 * Use of 3s Lipo batteries
 * Dual motor drivers for 4x4 mecanum drive
 * [UEXT sockets](https://www.olimex.com/Products/Modules/)
 * [mikroBUS socket](https://www.mikroe.com/mikrobus-shuttle-127mm-2x8-pin-box-header-smd-male)
 * Expanded I2C/ SPI connectors using [Breakout Garden](https://shop.pimoroni.com/collections/breakout-garden), [Qwiic](https://soldered.com/categories/easyc-2/)
 * Compatible with [Turtlebot mounting plates](https://craftcloud3d.com/configuration/4766265f-74b2-4e84-ae75-2e6df596f9b7)
 * Optional Mount plate for [affordable Lidar](https://github.com/n1kn4x/xv11_lidar_python#ros-2-driver-for-xv-11-lidar)


### Project Status

 * One developer interested in supporting Arduino/Smartcar shield 
 * One developer intereste in supporting Python
 * One developer interested in supporting ROS2
 * PCB volunteer working on the project
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

* 1 x [Modules board  TBC (rev.3)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) $8.24 bare PCB cost (no fab)
* 1 x [Motor board TBC(rev. 1)](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) $5 bare PCB cost (no fab)
* 4 x [Brushed motors](https://www.aliexpress.com/item/1005001279982165.html) (530rpm @ 12V) ~$33
* 1 x [ESP32 Micromod](https://www.sparkfun.com/micromod#processor_boards)~$17
* 2 x [TB6612FNG dual motor driver (Sparkfun)](https://www.sparkfun.com/products/14451) [~$11](https://www.aliexpress.com/item/1005004427223066.html)
* 4 x M6 (30mm) screws
* 4 x M6 nuts
* 16 x M3 (10mm) screws
* 16 x M3 nuts
* 2 x [HSP 02052 Front Bumper](https://www.aliexpress.com/item/32753903115.html)
* 10 x 6pin 2.54 pitch female pin headers
* 2 x 15pin 2.54 pitch female pin headers
* 4 x [8pin 2.54 pitch long male pin headers](https://www.aliexpress.com/item/32911455899.html) (30mm long)
* 4 x 8pin 2.54 pitch female pin headers
* 3 x 10KOhm resistors
* 1 x 3S Lipo battery 135mm*42mm*25mm 304g [~$21 2200Mah](https://www.aliexpress.com/item/1005001419560964.html) > [~$38 4000Mah](https://www.aliexpress.com/item/1005004335619259.html)
* 1 x [External buck converter](https://www.aliexpress.com/item/1005003593209704.html)
* 1 x [SPDT switch](https://www.tme.eu/en/details/5ms1s102am2qe/slide-switches/)
* 4 x [VL45L0x ToF distance sensors](https://www.aliexpress.com/item/32828144370.html) (optional)
* 2 X [Neopixel](https://www.adafruit.com/product/1312) (optional)
* 1 X [GY-50 IMU](https://www.aliexpress.com/item/32651955982.html) (Optional)
* 1 X [BNO-85 IMU](https://learn.adafruit.com/adafruit-9-dof-orientation-imu-fusion-breakout-bno085?view=all) Optional

Photos of [sensors & peripherals](https://github.com/rosmo-robot/smartcar_shield/blob/master/extras/Components/Img/readme.md) 
   

#### Microcontrollers

##### Esp32
- Used with [Smartcar Library](https://github.com/platisd/smartcar_shield#software)
- May also support [Microblocks](https://microblocks.fun/) 

##### Teensy
- Used for ROS2. Runs MicroROS. Connection to SBC is via USB

#### Single Board Computers (SBC)

We intend to develop some scripts for setting up robotics software on commonly used Single Board Computers which can be added to the basic microcontroller based platform.

The supported hardware may include; 

- Pi4, 
- Jetson Nano, 
- [Beaglebone Ai-64](https://beagleboard.org/ai-64) 
- [Radxa CM5](https://wiki.radxa.com/Rock5/CM) in a [carrier](https://github.com/dronecz/Minimal_carrier_board_for_CM4/tree/main/rev_C).

All these modules will run Ubuntu 22.04 LTS. 

Installed software may include

 - [LGPIO](https://ubuntu.com/tutorials/gpio-on-raspberry-pi#1-overview) & [script to set up GPIO](http://4tronix.co.uk/pi2go2/ipd03.py)
 - [Pyrobots](https://www.csc.liv.ac.uk/~lad/pyrobots/exercises.html) configuration script
 - [Python app providing a Webui for teleop](https://github.com/DIT112-V19/group-03) Pi GPIO > Micromod.  
 - [Python Robotics](https://github.com/AtsushiSakai/PythonRobotics) Pi GPIO > Micromod
 - [ROS2/Linorobot2](https://github.com/linorobot/linorobot2#linorobot2) USB > Micromod
 - [Rosboard](https://github.com/dheera/rosboard#rosboard) USB > Micromod
 - [Visual circuit](https://github.com/JdeRobot/VisualCircuit#visual-circuit) USB > Micromod
 - [Wetty](https://github.com/butlerx/wetty) with [Kaa](http://kaaedit.github.io/)
 - Some demo computer vision code

Linorobot:
![Linorobot2](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/ROS2.png)

## License
MIT & CERN-OHL-P for Smartcar 2.0 hardware
