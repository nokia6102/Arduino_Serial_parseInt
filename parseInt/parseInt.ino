long x = 0;
void setup()
{
  Serial.begin(9600);
  while (! Serial);
}

void loop()
{
  if (Serial.available())
  {
    x = Serial.parseInt();
    Serial.print("your input is: ");
    Serial.println(x);
    delay(500);
  }
}
