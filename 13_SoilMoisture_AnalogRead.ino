void setup() {
 
  Serial.begin(9600); //baud rate is set to 9600
  pinMode(A0, INPUT); //setting sensor pin as Input
}
void loop() 
{
        int sensorValue = analogRead(A0); // reading the analog input of the sensor and storing that value in variable "sensorValue"        
        Serial.println(sensorValue);
                   
}
