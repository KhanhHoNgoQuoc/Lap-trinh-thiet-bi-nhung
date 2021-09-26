void setup() {
  
pinMode (13, OUTPUT); 
}

void loop() {
  
digitalWrite (13, HIGH); // bật đèn
delay(500);
digitalWrite (13, LOW); // tắt đèn
delay(500);
}
