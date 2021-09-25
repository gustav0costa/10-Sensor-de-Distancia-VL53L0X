#include <LiquidCrystal_I2C.h>
#include "Adafruit_VL53L0X.h"
#include <Wire.h>

Adafruit_VL53L0X sensor = Adafruit_VL53L0X();
LiquidCrystal_I2C tela(PCF8574_ADDR_A20_A11_A01);

void setup() {
  if (!sensor.begin()) {
    while(1);
  }
  tela.begin(16,2);
  tela.backlight();
  tela.clear();
}

void loop() {
  tela.clear();
  VL53L0X_RangingMeasurementData_t medida;
  sensor.rangingTest(&medida, false);
  if (medida.RangeStatus != 4) {
    tela.setCursor(2,0);
    tela.print(medida.RangeMilliMeter);
    tela.setCursor(5,0);
    tela.print("mm");
    tela.setCursor(2,1);
    tela.print(medida.RangeMilliMeter/10);
    tela.setCursor(4,1);
    tela.print("cm");
  } else {
    tela.print("fora de alcance!");
  }
  tela.setCursor(5,0);
  tela.print("mm");
  delay(500);
}