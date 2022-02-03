void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);   //Select output pin
  Serial.begin(9600);
  Serial.println("Hello World!");  //Print on serial monitor

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
