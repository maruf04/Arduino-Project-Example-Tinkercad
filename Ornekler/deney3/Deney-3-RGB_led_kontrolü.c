int kirmiziPin= 11;
int yesilPin= 9;
int maviPin= 10;

void setup()
{
pinMode(kirmiziPin,
OUTPUT);
pinMode(yesilPin,
OUTPUT);
pinMode(maviPin,
OUTPUT);
}
void loop()
{
  renkAyarla(255,0,0);//kirmizi
  delay(1500);//1,5 saniye bekle
  renkAyarla(0,255,0);//yesil
  delay(1500);//1,5 saniye bekle
  renkAyarla(0,0,255);//mavi
  delay(1500);//1,5 saniye bekle
  renkAyarla(255,255,0);//sari
  delay(1500);//1,5 saniye bekle
  renkAyarla(80,0,80);//mor
  delay(1500);//1,5 saniye bekle
  renkAyarla(0,255,255);//açık mavi
  delay(1500);//1,5 saniye bekle
  renkAyarla(255,255,255);//Beyaz
  delay(1500);//1,5 saniye bekle
}

void renkAyarla(int kirmizi,int yesil,int mavi){
     digitalWrite(kirmiziPin, kirmizi);
 	 digitalWrite(yesilPin, yesil);
     digitalWrite(maviPin, mavi);
}
  
 
  
