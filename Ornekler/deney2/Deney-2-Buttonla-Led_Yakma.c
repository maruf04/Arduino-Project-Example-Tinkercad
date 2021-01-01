int ledPin=8;
int butonPin=9;
int butonDurum=0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butonPin, INPUT);
}

void loop()
{
  butonDurum=digitalRead(butonPin);
  if(butonDurum==HIGH)
  {
  	digitalWrite(ledPin,HIGH);
  }
  else
  {
  	digitalWrite(ledPin,LOW);
  }
}