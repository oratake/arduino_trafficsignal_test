int pedRed = 1;
int pedBlu = 0;
int carRed = 10;
int carYel = 9;
int carBlu = 8;

void setup() {
  for(int i=0; i<=13; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop() {
  digitalWrite(carRed,LOW);
  digitalWrite(carBlu,HIGH);
  digitalWrite(pedRed,HIGH);
  delay(5000);
  digitalWrite(carBlu,LOW);
  digitalWrite(carYel,HIGH);
  delay(1000);
  digitalWrite(carYel,LOW);
  digitalWrite(carRed,HIGH);
  delay(1000);
  digitalWrite(pedRed,LOW);
  digitalWrite(pedBlu,HIGH);
  delay(3000);
  for(int i=0; i<8; i++){
    digitalWrite(pedBlu,LOW);
    delay(250);
    digitalWrite(pedBlu,HIGH);
    delay(250);
  }
  digitalWrite(pedRed,HIGH);
  delay(1000);
}
