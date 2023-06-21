int ledPin[14];
void initPin(int led[],int number){
  for (int i = 0; i < number; i++){
    ledPin[i] = i;
  }
}

void setup() {
  // put your setup code here, to run once:
  initPin(ledPin, 14);
  for(int i = 0; i < 14; i++){
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i = 4; i++){
    digitalWrite(i*2, HIGH);
    digitalWrite(i*2+1, LOW);
  }
  delay(100);
  for(int i = 0; i = 4; i++){
    digitalWrite(i*2+1, HIGH);
    digitalWrite(i*2, LOW);
  }
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_86603\01-12-2022.ino.elf
