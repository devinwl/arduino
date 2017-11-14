/*
  Knight Rider Effect
  */
  
// Pins for lights
int lights1[3] = { 10, 11, 12 };
int lights2[3] = { 7, 5, 6 };

// States: 0 = red, 1 = green, 2 = yellow
int light1State = 2;
int light2State = 0;

// Pin for button
int buttonInput = 2;

// Direction of traffic flow
int dir = 1;

// Button being held down?
boolean buttonState = false;

// Traffic flow changing?
boolean changingState = false;

void setup()
{
  for(int i = 0; i < 3; i++)
  {
    pinMode(lights1[i], OUTPUT);
    pinMode(lights2[i], OUTPUT);
  }
  
  pinMode(buttonInput, INPUT);
  
  updateLEDs();
}

void loop()
{
  int state = digitalRead(buttonInput);
  if(state == HIGH && buttonState == false && changingState == false)
  {
    buttonState = true;
    request();
    updateLEDs();
    delay(50);
  }
  else if(state == LOW && buttonState == true && changingState == false)
    buttonState = false;
}

void updateLEDs()
{
  for (int i = 0; i < 3; i++)
  {
      digitalWrite(lights1[i], LOW);
      digitalWrite(lights2[i], LOW);
  }
  
  digitalWrite(lights1[light1State], HIGH);
  digitalWrite(lights2[light2State], HIGH);
}

void request()
{
  changingState = true;
  if (dir == 1)
  {
    light1State = 1;
    updateLEDs();
    delay(850);
    light1State = 0;
    updateLEDs();
    delay(450);
    light2State = 2;
    updateLEDs();
    dir = -1;
  }
  else
  {
    light2State = 1;
    updateLEDs();
    delay(850);
    light2State = 0;
    updateLEDs();
    delay(450);
    light1State = 2;
    updateLEDs();
    dir = 1;
  }
  delay(1000);
  changingState = false;
}
  
