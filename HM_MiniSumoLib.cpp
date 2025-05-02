#include "HM_MiniSumoLib.h"

HM_MiniSumoLib::HM_MiniSumoLib() {}

void HM_MiniSumoLib::Start() {
    setupMotorPins();
}

void HM_MiniSumoLib::setupMotorPins() {
    pinMode(AIN1, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);

    ledcSetup(0, PWM_FREQ, PWM_RES);
    ledcSetup(1, PWM_FREQ, PWM_RES);

    ledcAttachPin(PWMA, 0);
    ledcAttachPin(PWMB, 1);
}

void HM_MiniSumoLib::MoveForward(uint8_t speedA, uint8_t speedB) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);

    ledcWrite(0, speedA);
    ledcWrite(1, speedB);
}

void HM_MiniSumoLib::MoveBackward(uint8_t speedA, uint8_t speedB) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);

    ledcWrite(0, speedA);
    ledcWrite(1, speedB);
}

void HM_MiniSumoLib::TurnLeft(uint8_t speed) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);

    ledcWrite(0, 0);
    ledcWrite(1, speed);
}

void HM_MiniSumoLib::TurnRight(uint8_t speed) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);

    ledcWrite(0, speed);
    ledcWrite(1, 0);
}

void HM_MiniSumoLib::TurnLeftBackward(uint8_t speed) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);

    ledcWrite(0, 0);
    ledcWrite(1, speed);
}

void HM_MiniSumoLib::TurnRightBackward(uint8_t speed) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH);
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);

    ledcWrite(0, speed);
    ledcWrite(1, 0);
}

void HM_MiniSumoLib::SetBreakMotors() {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, HIGH);
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, HIGH);

    ledcWrite(0, 0);
    ledcWrite(1, 0);
}

void HM_MiniSumoLib::ShutdownMotors() {
    ledcWrite(0, 0);
    ledcWrite(1, 0);

    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
}