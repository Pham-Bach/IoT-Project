int led8 = 8; //gan chan so  thanh bien ...;
int led9 = 9;
int led10 = 10;
int led11 = 11;
void setup() {
  pinMode(led8,OUTPUT); // arduino xuat tin dieu khien ...
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
}

void loop() {
  digitalWrite(led8,HIGH); //  fan stop
  delay(250);  // delay 5s;

  digitalWrite(led9,HIGH); //  fan stop
  delay(250);  // delay 5s;
  
  digitalWrite(led10,HIGH); //  fan stop
  delay(250);  // delay 5s;
  
  digitalWrite(led11,HIGH); //  fan stop
  delay(250);  // delay 5s;

  digitalWrite(led8,LOW);
  digitalWrite(led9,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW); // fan run

  delay(250);

}
