long x = 0;
int r,g,b;
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
    r=x/1000/1000;
    g=x/1000%1000;
    b=x%1000;
    Serial.println(r);
    Serial.println(g);
    Serial.println(b);
  }
}
