int ledPin[] = {0, 3, 4, 5, 7, 9, 10, 11, 12, 13};
void setup() {
  for(int i = 0; i < sizeof(ledPin); i++){
    pinMode(ledPin[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < sizeof(ledPin); i++){
    digitalWrite(ledPin[i], HIGH);
    delay(200);
    digitalWrite(ledPin[i], LOW);
    delay(200);
  }
  
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_875477\01-12-2022-bt3.ino.elf
