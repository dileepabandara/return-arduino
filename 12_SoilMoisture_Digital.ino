void setup() {
 
  Serial.begin(9600); //baud rate is set to 9600
  pinMode(7, OUTPUT); //setting led pin as output
  pinMode(A0, INPUT); //setting sensor pin as Input
}
void loop() 
{
        int sensorValue = analogRead(A0); // reading the analog input of the sensor and storing that value in variable "sensorValue"        
        Serial.println(sensorValue);
          if(sensorValue<=500)
          {
            // if the condition is correct the LED will blink 
                digitalWrite(led, HIGH);   // making the LED switch ON
                delay(1000);      //interval of 1000 milli seconds is kept (1000ms = 1s)                 
                digitalWrite(led, LOW);    //making the LED switch off
                delay(1000);     //interval of 1000 milli seconds       
          }
          else // if there is no moisture in soil moisture sensor outputs "1" so else catches that condition
          {
                digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
          }                     
}
