int button1 = 0;
int button2 = 1;
int button3 = 2;
int led1 = 11;
int led2 = 12;
int led3 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void den1(int button, int led,  int loop, int t){
    if (digitalRead(button) == LOW) {
       for(int i = 0; i < loop; i++){ 
      digitalWrite(led, HIGH);
      delay(t);
      digitalWrite(led,LOW);
      delay(t);
      }
    }
}

void loop() {
  // put your main code here, to run repeatedly:
   den1(button1, led1, 5, 500);
   den1(button2, led2, 7, 200);
   den1(button3, led3, 10, 100);
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_218792\01-12-2022-bt3-bt4.ino.elf
