/*
  Knight Rider Effect
  */
  
int currLED = 8;
int dir = 1;

void setup()
{
  for(int i = 8; i < 13; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  delay(50);
  changeLED();
}

void changeLED()
{
  for (int i = 8; i < 13; i++)
  {
    digitalWrite(i, LOW);
  }
  
  digitalWrite(currLED, HIGH);
  currLED += dir;
  
  if(currLED > 12)
  {
    currLED = 12;
    dir = -1;
  }
  
  if(currLED < 8)
  {
    currLED = 8;
    dir = 1;
  }
}
  
