int led = 10;
int lamp = 7;
int btn1 = 4;
int btn2 = 0;
int temp;
int temp1;
int speaker = 8;
int temp2;
void setup() {
  
  pinMode(led,OUTPUT);
  pinMode(lamp, OUTPUT);
  pinMode(btn1,INPUT);

}

void bai2(){
  digitalWrite(led,HIGH);
   delay(15);
  digitalWrite(led,LOW);
  delay(10);
}

void bai3(){
  if (digitalRead(btn1) == 0 && digitalRead(btn2) == 1 && temp != 100) {
    for (int i = 0; i < 100; i++) {
      if (digitalRead(btn1) == 0) {
        digitalWrite(lamp, LOW);
        delay(50);
        temp++;
      } else {
        break;
      }
    }
  } 
  digitalWrite(lamp, HIGH);
  if (digitalRead(btn1) == 1 && digitalRead(btn2) == 0) {
    digitalWrite(lamp, LOW);
    temp = 0;
  };
}

void bai4() {
    if (digitalRead(btn2) == 0 && digitalRead(btn1) == 1 && temp1 != 5) {
    for (int i = 0; i < 1; i++) {
      if (digitalRead(btn2) == 0) {
        SPEAKER_RELAYS_OFF();
        delay(10000);
        SPEAKER_RELAYS_ON();
        delay(3000);
        temp1++;
      } else {
        break;
      }
    }
  }
  SPEAKER_RELAYS_OFF(); 
  if (digitalRead(btn2) == 1 && digitalRead(btn1) == 0) {
    SPEAKER_RELAYS_OFF();
    temp1 = 0;
  }
}

void SPEAKER_RELAYS_ON(){
  digitalWrite(lamp, HIGH);
  digitalWrite(speaker, HIGH);
}

void SPEAKER_RELAYS_OFF(){
  digitalWrite(temp, LOW);
  digitalWrite(speaker, LOW);
}

void bai5(){
  if (digitalRead(btn1) == 0 && digitalRead(btn2) == 0 && temp2 != 10) {
    for (int i = 0; i < 10; i++) {
      if (digitalRead(btn1) == 0 && digitalRead(btn2) == 0) {
        digitalWrite(speaker, HIGH);
        delay(1000);
        temp2++;
      } else {
        break;
      }
    }
  } 
  digitalWrite(speaker, LOW);
  if (digitalRead(btn1) == 1 && digitalRead(btn2) == 1) {
    digitalWrite(speaker, LOW);
    temp2 = 0;
  }
}

void loop() {
 
  bai2();
  delay(1000);
  
  if(digitalRead(btn1) == 0 && digitalRead(btn2) == 1)
    bai3();
    
  if(digitalRead(btn1) == 1 && digitalRead(btn2) == 0)
    bai4();
    
  if(digitalRead(btn1) == 0 && digitalRead(btn2) == 0)
    digitalWrite(lamp, LOW);
    bai5();

}

//C:\Users\Admin\AppData\Local\Temp\arduino_build_460159
