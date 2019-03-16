int ledPin=13;
int PinButton1=2;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(PinButton1,INPUT);
  digitalWrite(PinButton1,HIGH);
}

void loop() {
  digitalWrite(ledPin,HIGH);
  delay(300);
  digitalWrite(ledPin,LOW);
  delay(300);
  
//if (digitalRead(PinButton1)==LOW){
    digitalWrite(ledPin,HIGH);
   
}
//else{
   // digitalWrite(ledPin,LOW);
