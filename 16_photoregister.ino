const int light_pin = A0;
const int led_pin = 6;

const int threshold = 200;
void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  int val = analogRead(light_pin);
  
  if(val< threshold)
  {
  digitalWrite(led_pin, HIGH);
  }
  else 
  {  
  digitalWrite(led_pin, LOW);
  }
}
