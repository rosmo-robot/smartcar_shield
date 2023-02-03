# Smartcar shield

![Tests](https://github.com/platisd/smartcar_shield/workflows/Tests/badge.svg)
![Examples](https://github.com/platisd/smartcar_shield/workflows/Examples/badge.svg)
![Documentation](https://github.com/platisd/smartcar_shield/workflows/Documentation/badge.svg)
[![codecov](https://codecov.io/gh/platisd/smartcar_shield/branch/master/graph/badge.svg)](https://codecov.io/gh/platisd/smartcar_shield)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/466/badge)](https://bestpractices.coreinfrastructure.org/projects/466)
[![BCH compliance](https://bettercodehub.com/edge/badge/platisd/smartcar_shield?branch=master)](https://bettercodehub.com/)

A versatile and easy to use vehicle platform for hobby & Academic projects

- [Description](#description)
- [Hardware](#hardware)
- [Software](#software)
- [Smartcar 2.0](#Proposed-Smartcar-2.0-development)
- [How to get started](#how-to-get-started)
- [Dependencies](#dependencies)
- [Project documentation](#project-documentation)
- [License](#license)

## Description
This repository, includes everything necessary to set up a Smartcar platform.
The Smartcar, is a vehicular educational platform, which enables the user to develop
various robotic applications in an affordable, pedagogic and easy way. It is intended
for persons with basic programming knowledge and little to no experience of electronics,
mechanics or robotics. More experienced users, should also find this approach convenient,
due to its open source nature, high level API and object oriented design.

## Hardware
Despite the software being hardware-agnostic, historically, development has been based on specific
hardware. Initially, the **Smartcar shield** was used on top of an Arduino, using cheap car kits.
This setup will be referred to as `shield` or `v1`.

Since the winter of 2019, a new platform was developed from scratch, using the WiFi and Bluetooth
enabled ESP32 as the vehicle's "brain". This setup will be referred to as `platform` or `v2` and
will be considered the default one from now on. It offers greater robustness and many more
possibilities, as it offers out-of-the-box connectivity.

### Smartcar 1.0 (Current)

![smartcar platform](https://i.imgur.com/cFrq2Wj.jpg)

The existing Smartcar platform is a complete hardware solution for your hobby-grade, connected vehicle project.
It is comprised of the chassis, made out of printed circuit boards, stacked on each other and an
ESP32 development board that drives the motors, controls the sensors and communicates with the
world via WiFi and Bluetooth.

There are 4 motors with directional odometers which enable not only to determine how much the
wheels have moved but also the direction they spin. 

![Platform V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/smart.jpg)

![Motors V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/encoders.jpg)

![Driver V1](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/driver.jpg)

## Smartcar 2.0 (In development)

Licence: CERN-OHL-P

 Features;
 
 * Supporting variety of [Software](https://github.com/samuk/learn-robotics/blob/master/README.MD#objectives)
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
 * One developer interested in supporting ROS2
 * Some experience of PCB design
 * [Template Kicad files](https://github.com/rosmo-robot/smartcar_shield/tree/master/extras/kicad) created
 * PCB volunteer starting work on the project
 

### Smartcar 2.0

The Rosmo project is working with a volunteer PCB designer to produce a first iteration of the Smartcar 2.0 robot. This involves the design and layout of two interconnected PCB's;

1) The 'Modules' board - Significant revision from v1 that you see above. See below for concept layouts & BOM

![Optional compute concept](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/modules.png)

2) the 'Motor board - Largely unchanged mechanically from the V1 board you see above, additional motor driver to enable mecanum drive


![Dual driver concept](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/motors.png)

Longer term

- Offering an alternate/upgraded BLDC motor board using SimpleFOC, but re-using the 'Modules' board

#### Ros2/ Linorobot2 (With additional Compute module)

![Linorobot2](https://raw.githubusercontent.com/rosmo-robot/smartcar_shield/master/extras/images/ROS2.png)
[ROS2/Linorobot2](https://github.com/linorobot/linorobot2#linorobot2)

We hope Smartcar 2.0 interesting to makers, schools and universities using various [Software stacks](https://github.com/samuk/learn-robotics/blob/master/README.MD#objectives)

We realise there's no such thing as a universal robot platform, and there are risks in trying to be all things to all people. We however drawn to seeing what's possible with modularity and testing the edges of interoperability.

### Smartcar 2.0 BOM (In development)

* 1 x [Modules board  TBC (rev.3)]() $8.24 bare PCB cost (no fab)
* 1 x [Motor board TBC(rev. 1)]() $5 bare PCB cost (no fab)
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
* 1 x 3S Lipo battery [~$21 2200Mah](https://www.aliexpress.com/item/1005001419560964.html) > [~$38 4000Mah](https://www.aliexpress.com/item/1005004335619259.html)
* 1 x [External buck converter](https://www.aliexpress.com/item/1005003593209704.html)
* 1 x [SPDT switch](https://www.tme.eu/en/details/5ms1s102am2qe/slide-switches/)
* 4 x [VL45L0x ToF distance sensors](https://www.aliexpress.com/item/32828144370.html) (optional)
* 4 X [Neopixel](https://www.adafruit.com/product/1312) (optional)
* 1 X [GY-50 IMU]() (Optional)
* 1 X [BNO-85 IMU]() Optional

Photos of [sensors & peripherals](https://github.com/rosmo-robot/smartcar_shield/blob/master/extras/Components/Img/readme.md) 
   
### Older Smartcar platform v1.2 (default setup)

* 1 x [Modules board (rev.2)](https://www.pcbway.com/project/shareproject/Smartcar___Modules_board_rev_2.html)
* 1 x [Motor board (rev. 0)](https://www.pcbway.com/project/shareproject/Smartcar___Motors_board.html)
* 4 x [Brushed motors](https://www.aliexpress.com/item/32872592243.html) (530rpm @ 12V)
* 2 x [TXS0108E TTL level shifters](https://www.aliexpress.com/item/32472491036.html)
* 1 x DOIT ESP32 devkit v1 (30 GPIO pins)
* 1 x [TB6612FNG dual motor driver (Sparkfun)](https://www.sparkfun.com/products/14451)
* 4 x M6 (30mm) screws
* 4 x M6 nuts
* 16 x M3 (10mm) screws
* 16 x M3 nuts
* 2 x [HSP 02052 Front Bumper](https://www.aliexpress.com/item/32753903115.html)
* 10 x 6pin 2.54 pitch female pin headers
* 2 x 15pin 2.54 pitch female pin headers
* 1 x GY-50 gyroscope
* 4 x [8pin 2.54 pitch long male pin headers](https://www.aliexpress.com/item/32911455899.html) (30mm long)
* 4 x 8pin 2.54 pitch female pin headers
* 3 x 10KOhm resistors
* 8 x [AA battery holders](https://www.electrokit.com/produkt/batterihallare-1xaa-pcb/)
* 1 x [DD40AJSA adjustable buck converter](https://www.aliexpress.com/item/32816584868.html)
* 1 x [SPDT switch](https://www.tme.eu/en/details/5ms1s102am2qe/slide-switches/)
* 4 x [VL45L0x ToF distance sensors](https://www.aliexpress.com/item/32828144370.html) (optional)
  * 4 x 4pin 2.54 angled headers to mount the sensors vertically

### Smartcar shield

 * Smartcar chassis
 * [Smartcar shield PCB](extras/eagle/smartcar_shield)
 * L293D H-bridge
 * GY-50 gyroscope module
 * Two odometers (speed encoders) ([[1]](http://www.aliexpress.com/item/5pcs-IR-Infrared-Slotted-Optical-Speed-Measuring-Sensor-Optocoupler-Module-For-Motor-Test-For-Arduino-PIC/32465670452.html)
 and [[2]](http://www.aliexpress.com/item/HC-020K-Double-Speed-Measuring-Sensor-Module-with-Photoelectric-Encoders-Kit-top/32453020060.html)
 will suit commercially available chassis.
 [[3]](http://www.aliexpress.com/item/Correlation-photoelectric-sensor-lot-Infrared-correlation-count-sensor-module/2038553959.html)
 require some slight modifications)
 * Male & female pin headers (optionally get stackable Arduino headers too)
 * Five 2-pin screw terminals
 * Pin jumper
 * DIP16 socket
 * 0.1uF capacitors (2)
 * 100uF capacitor
 * 9V or 12V battery pack (do not use a single 9V battery)

### Supported sensors for version 1.2
 * Distance sensors
    * Ultrasonic
      * HC-SR04
      * SRF08
    * Infrared
      * SHARP GP2D120
      * SHARP GP2Y0A02
      * SHARP GP2Y0A21
 * Gyroscopes
   * GY-50 (L3G4200D)
 * Odometers
   * Directional (4+ pins)
   * Non-directional (3-pins)

### Shield

![smartcar_shield](https://i.imgur.com/7g5ts49.png)

The Smartcar shield is an open hardware PCB, that is effortlessly stacked on top of an Arduino. It
includes an L293D H-bridge chip, that drives the motors, screw terminals to connect the motors
and a battery to them and a GY-50 gyroscope module (based on the L3G4200D sensor).
In [extras/eagle/smartcar_shield](/extras/eagle/smartcar_shield) you can find the
design files for the board, in a modifiable form, using free software. There are
also the options, to order it as-is, from either USA or China based manufacturers.

The Smartcar shield, facilitates efficient cable management, helps to preserve space
and is as small as possible, in order to keep the manufacturing price low. Additionally,
the components necessary to assemble it, are widely available over the Internet. Furthermore,
you can find 2D CAD drawings of the Smartcar chassis in various formats, at
[/extras/cad/2D](extras/cad/2D) which you can freely use in order to fabricate your own,
e.g. with a milling machine or a laser cutter.

### Emulator

[SMCE](https://github.com/ItJustWorksTM/smce-gd/) is the digital twin of the Smartcar platform
along with a cool and customisable 3D world for your rover to roam in.<br>
The core concept is that you write Arduino code that runs on both the real hardware as well as
the virtual environment.
This way, the need to have exclusive and frequent access to the car can be either alleviated
or drastically decreased.
The emulator allows limiting the unavoidable engagement with the physical car, to the point a
team of developers may develop their features on the emulator and only access the real hardware
to verify them.

## Software
The software, is the Smartcar shield Arduino library. It sports a high level API, meant to
enable its users to perform tasks easily with relatively few lines of code. It intends to
hide implementation details or low level hardware operations. The library, handles
the various components (i.e. the vehicle and the various sensors) as objects, therefore
enabling trivial control over the car's functions. The various operations exposed by the API,
are thoroughly explained in [API Documentation](https://platisd.github.io/smartcar_shield/).
You can find examples on how to use the library, in [/examples](/examples).

The library is versatile and is independent from the shield or specific hardware.
Particularly, its most important feature is that it supports multiple ways of steering and
throttling with different types of motors. Moreover, it is possible to steer the vehicle by
rotating the wheels on each side at a different speed, like a tank as well as by using a
servo motor. Another option is to use a brushed DC motor for steering, a setup that is very
common in cheap RC cars. Additionally, apart of the default brushed DC motors that are
connected to the Smartcar shield, you can also use an electronic speed controller (ESC)
in order to drive (throttle) the vehicle, using the very same library.

If the Smartcar shield library is installed through the Library Manager of Arduino IDE, as
recommended, the user will receive a notification in their IDE, when new versions are released
making updates particularly easy, without the need to use GitHub or git.


## How to get started
 * Assemble the vehicle
 * [Install the library](https://www.ardu-badge.com/Smartcar%20shield)
 * [Connect the motors appropriately](examples/Car/shieldMotorsTest/shieldMotorsTest.ino) (if using the shield)
 * [Getting started with the Smartcar Platform](https://www.hackster.io/platisd/getting-started-with-the-smartcar-platform-1648ad)

## Dependencies
All dependencies should be downloaded automatically by the Arduino IDE's library manager.

- [Wire library](http://arduino.cc/en/reference/Wire)
- [Servo library](https://www.arduino.cc/en/reference/servo)
- [ServoESP32](https://github.com/RoboticsBrno/ServoESP32)
- [ESP32 AnalogWrite](https://github.com/ERROPiX/ESP32_AnalogWrite)

## Project documentation
* [API Documentation](https://platisd.github.io/smartcar_shield/)
* [The Smartcar platform](http://plat.is/smartcar)
* [Wiki](https://github.com/platisd/smartcar_shield/wiki)
* [Turning software engineers into Makers](https://platis.solutions/blog/2016/06/17/turning-software-engineers-into-makers/)

## License
MIT
