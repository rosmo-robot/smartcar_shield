#ifndef SMARTCAR_IMU_H
#define SMARTCAR_IMU_H

#if defined(USE_ADAFRUIT_BNO08x)
  #include <Adafruit_BNO08x.h>
  #include <Adafruit_Sensor.h>
#elif defined(USE_MPU9250_WE)
  #include <MPU9250_WE.h>
#endif

class Smartcar_IMU {
  public:
    Smartcar_IMU();
    void begin();
    float getHeading();
  private:
    #if defined(USE_ADAFRUIT_BNO08x)
      Adafruit_BNO08x _imu;
    #elif defined(USE_MPU9250_WE)
      MPU9250_WE _imu;
    #endif
};

#endif
