void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  int outputValue = map(value, 0, 1023, 0, 255);
  analogWrite(9,outputValue);
  
  if (digitalRead(0) == 1 && digitalRead(1) == 0){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
  
  if (digitalRead(1) == 1 && digitalRead(0) == 0){
    digitalWrite(13, HIGH);
    digitalWrite(12,LOW);
  }
  
  if (digitalRead(0) == 0 && digitalRead(1) == 0 || digitalRead(0) == 1 && digitalRead(1) == 1){
    digitalWrite(13, LOW);
    digitalWrite(12,LOW);
  }
  /*
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(13, HIGH);
  digitalWrite(12,LOW);
  delay(5000);
  */
}
//  
//nut 1 dong co chay 
//nut 2 dong co chay nguoc
