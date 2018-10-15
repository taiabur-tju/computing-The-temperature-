unsigned long Tempr [][2] = {
  { -50, 0 },
{ 100 , 390 },
{ 150 , 1677 },
{ 200 , 2544 },
{ 250, 3237 },
{ 300 , 3837 },
{ 350 , 4382 },
{ 400 , 4895 },
{ 450 , 5392 },
{ 500 , 5883 },
{ 550 , 6379 },
{ 600 , 6890 },
{ 650 , 7426 },
{ 700 , 8002},
{ 750 , 8636 },
{ 800 , 9355 },
{ 850 , 10203},
{ 900 , 11260},
{ 950 , 12695 },
{ 971 , 14985 },
{ 1023 , 16567 },

};
#define inputPin A0
void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  int adco, adci, tempo, tempi;
  int result;
  int  adc=analogRead(inputPin);
  Serial.println(adc);
  for(i=1; adc > Tempr[i][0]; i++);
  adco=Tempr[i-1][0];
  tempo=Tempr[i][0];
  tempi=Tempr[i][1];
  delay(1000);
  result = map(adc, adco, adci, tempo,tempi);
  Serial.println((result-4000)/100);
}
