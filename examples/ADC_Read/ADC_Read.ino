// Read analog value from pin A0 (PA0 on Blue Pill)
void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcValue = analogRead(PA0);
  Serial.print("ADC Value: ");
  Serial.println(adcValue);
  delay(500);
}
