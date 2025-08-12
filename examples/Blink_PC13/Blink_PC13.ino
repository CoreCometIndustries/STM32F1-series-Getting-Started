// Blink LED on PC13 (Blue Pill built-in LED)
void setup() {
  pinMode(PC13, OUTPUT);
}

void loop() {
  digitalWrite(PC13, LOW);  // LED ON (active low)
  delay(500);
  digitalWrite(PC13, HIGH); // LED OFF
  delay(500);
}
