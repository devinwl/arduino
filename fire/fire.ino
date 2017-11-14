/*
  Fire Effect
  */
  
int currLED = 8;
int dir = 1;

void setup()
{
  for(int i = 9; i < 12; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  analogWrite(9, random(120)+60);
  analogWrite(10, random(120)+135);
  analogWrite(11, random(120)+135);
  delay(random(100));
}
  
