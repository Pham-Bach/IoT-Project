int led = 11;
int butt = 0;
int n = 0;
int s = 0;
int e = 0;
/*int buttonCounter = 0;
int buttonState = 0;  
int lastButtonState = 0;*/
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(butt, INPUT);

}

void cb(int n){
  for (int i = 0; i < n; i++){
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led,HIGH);
    delay(200);
  }
}

void loop() {
  /*buttonState = digitalRead(butt);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH){
       buttonCounter++;
  }
  
  lastButtonState = buttonState;
  int loop = buttonCounter%10; */
  s = digitalRead(butt);
 if (s != e){
  if (s == LOW){
    n++;
    if (n <=13 ){
      cb(n);
    }
    else {
      int m = 1;
      n = m;
      cb(m);
    }
  }
  e = s;
 }
}
