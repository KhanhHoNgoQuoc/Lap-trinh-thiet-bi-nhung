
int enA = 8;
int in1 = 10;
int in2 = 9;

int enB = 7;
int in3 = 6;
int in4 = 5;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop(){
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}

void directionControl(){
  analogWrite(enA, 255);
  analogWrite(enB, 255);
  

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
  
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
  
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void speedControl(){
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  for(int i = 0; i <= 255; i++){
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  
  for(int i = 255; i >= 0; i--){
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
  
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
