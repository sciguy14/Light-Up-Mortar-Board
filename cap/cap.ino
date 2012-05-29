//Define LED Pins
int green_SE = 1;
int green_E = 2;
int green_NE = 3;
int green_N = 4;
int green_NW = 5;
int green_W = 6;
int green_SW = 7;
int green_S = 8;
int yellow_NE = 9;
int yellow_NW = 10;
int yellow_SW = 11;
int yellow_SE = 12;
int red = 13;

void setup()
{
  //set pins to output mode
  for (int i = 1; i<=13; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  //Nautilus Spiral
  digitalWrite(red, HIGH);
  for(int i=1; i<=8;i++)
  {
    digitalWrite(i, HIGH);
    if (i==1) digitalWrite(yellow_SE, HIGH);
    else if (i==3) digitalWrite(yellow_NW, HIGH);
    else if (i==5) digitalWrite(yellow_NE, HIGH);
    else if (i==7) digitalWrite(yellow_SW, HIGH);
    delay(100);
  }
  for(int i=1; i<=8;i++)
  {
    digitalWrite(i, LOW);
    if (i==1) digitalWrite(yellow_SE, LOW);
    else if (i==3) digitalWrite(yellow_NW, LOW);
    else if (i==5) digitalWrite(yellow_NE, LOW);
    else if (i==7) digitalWrite(yellow_SW, LOW);
    delay(100);
  }
  delay(500);
  for(int i=8; i>=1;i--)
  {
    digitalWrite(i, HIGH);
    if (i==1) digitalWrite(yellow_SE, HIGH);
    else if (i==3) digitalWrite(yellow_NW, HIGH);
    else if (i==5) digitalWrite(yellow_NE, HIGH);
    else if (i==7) digitalWrite(yellow_SW, HIGH);
    delay(100);
  }
  for(int i=8; i>=1;i--)
  {
    digitalWrite(i, LOW);
    if (i==1) digitalWrite(yellow_SE, LOW);
    else if (i==3) digitalWrite(yellow_NW, LOW);
    else if (i==5) digitalWrite(yellow_NE, LOW);
    else if (i==7) digitalWrite(yellow_SW, LOW);
    delay(100);
  }
  digitalWrite(red, LOW);
  delay(1000);
  
  //Pulse
  digitalWrite(red, HIGH);
  delay(300);
  for (int i=9;i<=12;i++) digitalWrite(i,HIGH);
  delay(300);
  for (int i=1;i<=8;i++) digitalWrite(i,HIGH);
  delay(300);
  digitalWrite(red, LOW);
  delay(300);
  for (int i=9;i<=12;i++) digitalWrite(i,LOW);
  delay(300);
  for (int i=1;i<=8;i++) digitalWrite(i,LOW);
  delay(300);
  for (int i=1;i<=8;i++) digitalWrite(i,HIGH);
  delay(300);
  for (int i=9;i<=12;i++) digitalWrite(i,HIGH);
  delay(300);
  digitalWrite(red, HIGH);
  for (int i=1;i<=8;i++) digitalWrite(i,LOW);
  delay(300);
  for (int i=9;i<=12;i++) digitalWrite(i,LOW);
  delay(300);
  digitalWrite(red, LOW);
  
  delay(1000);
  
  //Random
  for(int i=0; i<200; i++)
  {
    int pin = random(1,14);
    if (digitalRead(pin)) digitalWrite(pin, LOW);
    else digitalWrite(pin, HIGH);
    delay (50);
  }
  for (int i = 1; i<=13; i++)
  {
    digitalWrite(i, LOW);
  }
  delay(1000);
  
}

