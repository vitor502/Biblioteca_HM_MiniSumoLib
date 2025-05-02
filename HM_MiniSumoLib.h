#ifndef HM_MINISUMOLIB_H
#define HM_MINISUMOLIB_H

#include <Arduino.h>

class HM_MiniSumoLib {
public:
    HM_MiniSumoLib();

    void Start();
    void MoveForward(uint8_t speedA, uint8_t speedB);
    void MoveBackward(uint8_t speedA, uint8_t speedB);
    void TurnLeft(uint8_t speed);
    void TurnRight(uint8_t speed);
    void TurnLeftBackward(uint8_t speed);
    void TurnRightBackward(uint8_t speed);
    void SetBreakMotors();
    void ShutdownMotors();

private:
    const int AIN1 = 18;
    const int AIN2 = 5;
    const int PWMA = 22;
    const int BIN1 = 19;
    const int BIN2 = 21;
    const int PWMB = 23;

    const int PWM_FREQ = 3600;
    const int PWM_RES = 8; // 8 bits = 0-255

    void setupMotorPins();
};

#endif