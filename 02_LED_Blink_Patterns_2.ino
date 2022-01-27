void setup() {
  
  int i;

  for(i=2;i<7;i++)
  {
    pinMode(i, OUTPUT);  
  }

}

void loop() {

  int i;

  for(i=2;i<7;i++)
  {
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    delay(200);  
  }

}