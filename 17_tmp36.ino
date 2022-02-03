const int temp_pin = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float voltage;
  float temp_c;
  
  voltage = analogRead(temp_pin) * 5.0 / 1023;
  temp_c = 100.0 * voltage - 50;
  
  Serial.print("Voltage : ");
  Serial.println(voltage);
  Serial.print("Deg C : ");
  Serial.println(temp_c);

  delay (2000);
  
}
