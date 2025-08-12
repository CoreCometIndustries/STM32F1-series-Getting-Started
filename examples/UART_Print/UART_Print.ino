// Print text to Serial Monitor
void setup() {
  Serial.begin(115200);
  Serial.println("Hello from STM32F1 using Arduino IDE!");
}

void loop() {
  Serial.println("Loop running...");
  delay(1000);
}
