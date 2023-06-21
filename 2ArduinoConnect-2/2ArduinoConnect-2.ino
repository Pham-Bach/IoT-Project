int led1 = 9;
int led2 = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    int byte_nhan = Serial.read();
    Serial.print("byte nhan la ");
    Serial.println(byte_nhan);
    delay(200);
  }
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_140513\2ArduinoConnect-2.ino.elf
