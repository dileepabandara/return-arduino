void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);
  delay(100); // Wait for 10 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(12, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}

void setup2()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, HIGH);
  delay(100); // Wait for 10 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(11, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
