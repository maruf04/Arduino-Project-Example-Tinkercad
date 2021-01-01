int led=8;
void setup()
{
  pinMode(led, OUTPUT);//led bir cıkıs pimidir cunku bir değer donderir
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(4000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
}