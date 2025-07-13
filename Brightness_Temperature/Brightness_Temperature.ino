  const int ledPin = LED_BUILTIN;
  int brightness  = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  brightness = map(temp, 48, 28, 0, 255);
  Serial.print("brightness");
  Serial.print(brightness, 1);
  Serial.println();
  delay(1000);

  analogWrite(ledPin, brightness);

}
