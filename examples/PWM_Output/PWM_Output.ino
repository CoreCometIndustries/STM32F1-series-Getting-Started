// Generate PWM signal on PA8
void setup() {
  pinMode(PA8, OUTPUT);
}

void loop() {
  analogWrite(PA8, 128); // ~50% duty cycle
  delay(1000);
  analogWrite(PA8, 255); // ~100% duty cycle
  delay(1000);
}
