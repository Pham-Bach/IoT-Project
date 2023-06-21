int button1 =2;
int button2 =3;
int temp;
void setup() {
  pinMode(8,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
}

void LED_ON_OFF1(){
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
}

void LED_0N_OFF2(){
  digitalWrite(8,HIGH);
  delay(5000);
  digitalWrite(8,LOW);
}

void loop() {
  if (digitalRead(button2) == 0 && temp != 5 )
    for(int i = 0; i< 5; i++){
      if (digitalRead(button2) == 1){
        break;
      }
      LED_ON_OFF1();
      temp++;
    }
   if (digitalRead(button2) == 1) {
    temp = 0;
   }
}
/* viet chuong trinh su dung 2nut, 
    nut 1 noi chan so 2, nhan nut 1 LED sang 10s tu tat
    nut 2 noi chan so 3, LED sang tat sau moi 500ms roi tat*/
