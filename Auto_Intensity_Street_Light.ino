int ldr = A0;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(ldr);

  int brightness = map(sensorValue, 1023, 0, 0, 255);

  brightness = constrain(brightness, 0, 255);

  analogWrite(led, brightness);

  Serial.print("LDR Value: ");
  Serial.print(sensorValue);
  Serial.print(" Brightness: ");
  Serial.println(brightness);

  delay(200);
}
