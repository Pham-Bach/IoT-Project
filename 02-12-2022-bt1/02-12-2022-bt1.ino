void setup() {
  
  pinMode(9,OUTPUT);
 

}

void loop() {
  
  int resistor_var = analogRead(A5); // doc gia tri bien tro vao chan A5
  int outputValue = map(resistor_var, 0, 1023, 0, 255); // chuyen range (0->1023) thang range(0->255)
  analogWrite(9,outputValue); // xuat gia tri bien tro de dieu khien do sang cua led
}
//C:\Users\Admin\AppData\Local\Temp\arduino_build_882957\02-12-2022-bt1.ino.elf
