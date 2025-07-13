#include "DFRobot_SHT20.h";
DFRobot_SHT20 sht20(&Wire, SHT20_I2C_ADDR);
const int ledPin = LED_BUILTIN;
int brightness  = 0;
void setup() {
  sht20.initSHT20();
  delay(100);
  sht20.checkSHT20();
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  float humd = sht20.readHumidity();
  float temp = sht20.readTemperature();
  brightness = map(temp, 48, 28, 0, 255);

  Serial.print("Time");
  Serial.print(millis());
  Serial.print("Temprature:");
  Serial.print(temp, 1);
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print("%");
  Serial.print("brightness");
  Serial.print(brightness, 1);
  Serial.println();
  delay(1000);

  analogWrite(ledPin, brightness);

}
