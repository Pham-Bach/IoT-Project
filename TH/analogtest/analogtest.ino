void setup() {
  
  pinMode(9,OUTPUT);
 

}

void loop() {
  
  int resistor_var = analogRead(A0); // doc gia tri bien tro vao chan A0
  int outputValue = map(resistor_var, 0, 1023, 0, 255); // chuyen range (0->1023) thang range(0->255)
  analogWrite(9,outputValue); // xuat gia tri bien tro de dieu khien do sang cua led
}
