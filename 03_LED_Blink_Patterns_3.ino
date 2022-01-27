void setup() {
  
  int i, j, k;

  for(i=2;i<7;i++)
  {
    pinMode(i, OUTPUT);  
  }

  for(k=0;k<3;k++)
  {
    for(j=2;j<7;j++)
    {
      digitalWrite(j, HIGH);
      delay(200);
      digitalWrite(j, LOW);
      delay(200);  
    }  
  }

}

void loop() {


}