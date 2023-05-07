/* This code is build inorder to support a course work.
  do connect according to the pins mentioned below.*/

int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int Xval;
int Yval;
int Sval;
int dt= 200;
// these are the output pins
int opin1 = 4 ;
int opin2 = 5 ;
int opin3 = 6 ;
int opin4 = 7 ;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(Spin, INPUT);
  digitalWrite(Spin, HIGH);
  // digital outputs which sets the relays to HIGH or LOW
  pinMode(opin1, OUTPUT);
  pinMode(opin2, OUTPUT);
  pinMode(opin3, OUTPUT);
  pinMode(opin4, OUTPUT);


}

void loop() {
Xval = analogRead(Xpin);
Yval = analogRead(Ypin);
Sval = digitalRead(Spin);
delay(dt);
Serial.print("X value = ");
Serial.print(Xval);
Serial.print(" Y value = ");
Serial.print(Yval);
Serial.print(" Switch state is ");
Serial.print(Sval);

  if(Xval > 525){
  digitalWrite(opin1, HIGH);
  }
  else{
  digitalWrite(opin1, LOW);
  }

  if(Xval < 500){
  digitalWrite(opin2, HIGH);
  }
  else{
  digitalWrite(opin2, LOW);
  }

// this part is for Y-Axis 
  if(Yval > 525){
  digitalWrite(opin3, HIGH);
  }
  else{
  digitalWrite(opin3, LOW);
  }

  if(Yval < 500){
  digitalWrite(opin4, HIGH);
  }
  else{
  digitalWrite(opin4, LOW);
  }

}
