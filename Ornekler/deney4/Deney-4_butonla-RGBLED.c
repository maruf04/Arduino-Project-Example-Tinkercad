const int BlueLed=10;
const int GreenLed=11;
const int RedLed=9;
const int buton=4;
bool oncekiBtnDurum=LOW;
bool simdikiBtnDurum=LOW;
int LedModu=0;
void setup()
{
	pinMode(BlueLed, OUTPUT);
	pinMode(GreenLed, OUTPUT);
	pinMode(RedLed, OUTPUT);
	pinMode(buton, INPUT);
}
void loop()
{ 	simdikiBtnDurum=butonkontrol(oncekiBtnDurum);
	if(simdikiBtnDurum==HIGH && oncekiBtnDurum==LOW)
	{
		LedModu++;
	}
	oncekiBtnDurum=simdikiBtnDurum;
	if(LedModu==7)
	{
		LedModu=0;
	}
	rgbAyarla(LedModu);
}

bool butonkontrol (bool durum)
{
	bool simdikiBtn=digitalRead(buton);
	if(durum!=simdikiBtn){
		delay(5);
		simdikiBtn=digitalRead(buton);
    }
	return simdikiBtn;
}

void rgbAyarla(int renk)
{
	if(renk==1){
		digitalWrite(BlueLed, HIGH);
		digitalWrite(GreenLed, HIGH);
		digitalWrite(RedLed, LOW);}
	else if(renk==2){
		digitalWrite(BlueLed, LOW);
		digitalWrite(GreenLed, HIGH);
		digitalWrite(RedLed, HIGH);}
	else if(renk==3){
		digitalWrite(BlueLed, HIGH);
		digitalWrite(GreenLed, LOW);
		digitalWrite(RedLed, HIGH);}
	else if(renk==4){
		analogWrite(BlueLed, 127);
		analogWrite(GreenLed, 0);
		analogWrite(RedLed, 127);}
	else if(renk==5){
		analogWrite(BlueLed, 127);
		analogWrite(GreenLed, 127);
		analogWrite(RedLed, 0);}
	else if(renk==6){
		analogWrite(BlueLed, 0);
		analogWrite(GreenLed, 127);
		analogWrite(RedLed, 127);}
}