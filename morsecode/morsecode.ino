/*
  Morse Code
 */
 
int ledPin = 10;  

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  process("ARDUINO");
  delay(1000);
}

void dit()
{
  digitalWrite(ledPin, HIGH);
  delay(150);
  digitalWrite(ledPin, LOW);
  delay(300);
}

void dah()
{
  digitalWrite(ledPin, HIGH);
  delay(450);
  digitalWrite(ledPin, LOW);
  delay(300);
}

void process(char* string)
{
  int i = 0;
  while(string[i] != '\0')
  {
    char c = string[i];
    if (c == 'a' || c == 'A')
    {
      dit();
      dah();
    }
    else if(c == 'b' || c == 'B')
    {
      dah();
      dit();
      dit();
      dit();
    }
    else if(c == 'c' || c == 'C')
    {
      dah();
      dit();
      dah();
      dit();
    }
    else if(c == 'd' || c == 'D')
    {
      dah();
      dit();
      dit();
    }
    else if(c == 'e' || c == 'E')
    {
      dit();
    }
    else if(c == 'f' || c == 'F')
    {
      dit();
      dit();
      dah();
      dit();
    }
    else if(c == 'g' || c == 'G')
    {
      dah();
      dah();
      dit();
    }
    else if(c == 'h' || c == 'H')
    {
      dit();
      dit();
      dit();
      dit();
    }
    else if(c == 'i' || c == 'i')
    {
      dit();
      dit();
    }
    else if(c == 'j' || c == 'J')
    {
      dit();
      dah();
      dah();
      dah();
    }
    else if(c == 'k' || c == 'K')
    {
      dah();
      dit();
      dah();
    }
    else if(c == 'l' || c == 'L')
    {
      dit();
      dah();
      dit();
      dit();
    }
    else if(c == 'm' || c == 'M')
    {
      dah();
      dah();
    }
    else if(c == 'n' || c == 'N')
    {
      dah();
      dit();
    }
    else if(c == 'o' || c == 'O')
    {
      dah();
      dah();
      dah();
    }
    else if(c == 'p' || c == 'P')
    {
      dit();
      dah();
      dah();
      dit();
    }
    else if(c == 'q' || c == 'Q')
    {
      dah();
      dah();
      dit();
      dah();
    }
    else if(c == 'r' || c == 'R')
    {
      dah();
      dah();
      dit();
      dah();
    }
    else if(c == 's' || c == 'S')
    {
      dit();
      dit();
      dit();
    }
    else if(c == 't' || c == 'T')
    {
      dah();
    }
    else if(c == 'u' || c == 'U')
    {
      dit();
      dit();
      dah();
    }
    else if(c == 'v' || c == 'V')
    {
      dit();
      dit();
      dit();
      dah();
    }
    else if(c == 'w' || c == 'W')
    {
      dit();
      dah();
      dah();
    }
    else if(c == 'x' || c == 'X')
    {
      dah();
      dit();
      dit();
      dah();
    }
    else if(c == 'y' || c == 'Y')
    {
      dah();
      dit();
      dah();
      dah();
    }
    else if(c == 'z' || c == 'Z')
    {
      dah();
      dah();
      dit();
      dit();
    }
    else
    {
      digitalWrite(ledPin, HIGH);
      delay(750);
      digitalWrite(ledPin, LOW);
      delay(100);
    }
      
    i++;
  }
}
