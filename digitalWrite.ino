const int LED = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  //digitalWrite(LED,HIGH);
  //digitalWrite(LED,LOW);

}

void loop() {
  for (int t_high=0;t_high<=10;t_high++){
    digitalWrite(LED,HIGH);
    delay(t_high);
    digitalWrite(LED,LOW);
    delay(10-t_high);
  }
}
