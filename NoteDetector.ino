int vcc = 12;
int gnd =2;
int m1 = 7;
int m2 = 6;
void setup()
{
Serial.begin(9600);
pinMode(vcc, OUTPUT);
pinMode(gnd, OUTPUT);
pinMode(m1, OUTPUT);
pinMode(m2, OUTPUT);
}
void loop()
{
  
digitalWrite(vcc, HIGH);
digitalWrite(gnd, LOW);
unsigned int AnalogValue;
AnalogValue = analogRead(A0);
Serial.print("sensor value ");
Serial.println(AnalogValue);
if (905<= AnalogValue && AnalogValue <=915)
{
Serial.println("$ 10");
delay(1500);
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
delay(2000);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
}
if (930<= AnalogValue && AnalogValue<= 940)
{
Serial.println("$ 500");
delay(1500);
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
delay(2000);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
}
if (960<= AnalogValue && AnalogValue <= 970)
{
Serial.println("$ 200/100");
delay(1500);
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW); 
delay(2000);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
}
else
{
Serial.println("= =");
digitalWrite(LED_BUILTIN,LOW);
}
delay(400);
}  
