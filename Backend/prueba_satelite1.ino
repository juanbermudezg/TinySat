void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read(); 
    if (data == 'A') {
      digitalWrite(12, HIGH);
    } else {
      digitalWrite(12, LOW);
    }
  }
}
