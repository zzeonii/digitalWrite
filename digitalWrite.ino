const int LED = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  //digitalWrite(LED,HIGH);
  //digitalWrite(LED,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(50);
  digitalWrite(LED,LOW);
  delay(50);
}
