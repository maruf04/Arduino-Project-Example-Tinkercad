int piezoPin = 8; // Piezonun bağlandığı pin D8
int ldrPin = A0; // LDR’ nin bağlandığı pin A0
int ldrValue = 0; // LDR değerini okuyacağımız değişkeni tanımlıyoruz

void setup()
{}

void loop()
{
  ldrValue = analogRead(ldrPin); // LDR’ den analog değeri okuyoruz
  tone(piezoPin,1000); // piezodan 1000Hz değerinde ses elde ediyoruz
  delay(25);
  noTone(piezoPin); // 25ms bekledikten sonra sesi kapatıyoruz
  digitalWrite(13, LOW);
  delay(ldrValue); // LDR’ den okunan değerin milisaniyesi kadar bekliyoruz
}