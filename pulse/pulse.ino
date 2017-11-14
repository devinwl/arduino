/*
  Pulse Effect
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
  for (int x = 0; x < 180; x++)
  {
    analogWrite(9, int(sin(x*(3.14/180))*255));
    analogWrite(10, int(cos(x*(3.14/180))*255));
    analogWrite(11, int(sin(x*(3.14/180))*255));
    delay(25);
  }
}
  
