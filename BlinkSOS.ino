int LED=13;
void setup() { 
Serial.begin(9600);
pinMode(LED,OUTPUT);
}
void loop() {
  S();
  O();
  S();
}
void S()
{
 digitalWrite(LED, HIGH);
 delay(500); 
 digitalWrite(LED, LOW); 
 delay(1000);
 digitalWrite(LED, HIGH);
 delay(500);
 digitalWrite(LED, LOW);
 delay(1000); 
 digitalWrite(LED, HIGH);
 delay(500); 
 digitalWrite(LED, LOW);
 delay(1000); 
}
void O()
{
  digitalWrite(LED,HIGH);
  delay(1125);
  digitalWrite(LED,LOW);
  delay(375);
  digitalWrite(LED,HIGH);
  delay(1125);
  digitalWrite(LED,LOW);
  delay(375);
  digitalWrite(LED,HIGH);
  delay(1125);
  digitalWrite(LED,LOW);
  delay(375);
}
