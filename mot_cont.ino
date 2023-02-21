// for detailed understanding, check video number 827 of Haseeb Electronics (YouTube) Channel 
void setup() {
  pinMode (3, INPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void loop() {
  byte inputPulse=digitalRead(3);
  if (inputPulse == HIGH){
    digitalWrite (4,HIGH);
    digitalWrite (5,HIGH);
    delay (8000);
    digitalWrite (5,LOW);
    digitalWrite (6,HIGH);
    delay (8000);
    digitalWrite (6,LOW);
    digitalWrite (7,HIGH);
    delay (8000);
    digitalWrite (7,LOW);
    digitalWrite (4,LOW);
    setup();
    }
}
