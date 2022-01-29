

int smoke = A0; // initializing pin number 7 to a variable 
int led = 8; //initializing the pin number 8 to a variable 

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  pinMode(smoke, INPUT);
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int smokeval = analogRead(smoke);
  // print out the state of the button:
  Serial.println(smokeval);
  delay(100);    // delay in between reads for stability

  if(smokeval<350)//check if the condition is correct 
  {
    digitalWrite(led,HIGH);// turn on LED
    delay(1000); //pasuse for 1 second
    digitalWrite(led,LOW); // turn off LED 
    delay(1000);  //pasuse for 1 second
  }
  else
  {
      digitalWrite(led,LOW); // turn off LED 
  }
}
