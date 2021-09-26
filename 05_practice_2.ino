#define PIN7 7
void setup() {
  pinMode(PIN7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN7,LOW);
  delay(1000);
  int cnt=0;
  while(cnt<5){
    digitalWrite(PIN7,HIGH);
    delay(100);
    digitalWrite(PIN7,LOW);
    delay(100);
    cnt++;
  }
  digitalWrite(PIN7,HIGH);
  while(1){
    
  }
}
