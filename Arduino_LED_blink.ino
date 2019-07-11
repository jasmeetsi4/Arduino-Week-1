int LED=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 pinMode(LED,HIGH);
 delay(1000);
 pinMode(LED,LOW);
 delay(1000);
}
