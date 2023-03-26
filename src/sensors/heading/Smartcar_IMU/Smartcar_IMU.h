#ifndef SMARTCAR_IMU_H
#define SMARTCAR_IMU_H

#include <Adafruit_BNO08x.h>

class Smartcar_IMU : public Adafruit_BNO08x {
public:
  Smartcar_IMU(TwoWire *wire = &Wire, int32_t sensorID = -1)
      : Adafruit_BNO08x(sensorID, wire) {}
  void begin() { Adafruit_BNO08x::begin(); }
  void setRotationVector(uint16_t interval_ms) {
    Adafruit_BNO08x::enableRotationVector(interval_ms);
  }
  float getHeading() {
    imu::Quaternion quat = getQuat();
    imu::Vector<3> euler = quat.toEuler();
    float heading = euler.y() * 180.0 / M_PI;
    return heading;
  }
};

#endif // SMARTCAR_IMU_H
