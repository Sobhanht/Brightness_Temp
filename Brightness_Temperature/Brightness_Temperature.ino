#include "DFRobot_SHT20.h";
DFRobot_SHT20 sht20(&Wire, SHT20_I2C_ADDR);

void setup() {
  // put your setup code here, to run once:
  sht20.initSHT20();
  delay(100);
  sht20.checkSHT20();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
