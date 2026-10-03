void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(5000);
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(5000);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(5000);
}
