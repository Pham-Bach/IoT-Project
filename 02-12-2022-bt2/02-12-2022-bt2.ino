void setup() {
  
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
 

}

void loop() {
  
  int resistor_var1 = analogRead(A5); // doc gia tri bien tro vao chan A5
  int resistor_var2 = analogRead(A0);
  int outputValue1 = map(resistor_var1, 0, 1023, 0, 255); // chuyen range (0->1023) thang range(0->255)
  int outputValue2 = map(resistor_var2, 0, 1023, 0, 255);
  analogWrite(1,outputValue1); // xuat gia tri bien tro de dieu khien do sang cua led
  analogWrite(2,outputValue2); 
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_894043/02-12-2022-bt2.ino.elf
