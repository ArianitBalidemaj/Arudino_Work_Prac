int DP = 3;
int C = 4;
int D = 5; 
int E = 6;
int B = 10;
int A = 9;
int F = 8;
int G = 7;
int delayTime = 500;


void setup() {
  pinMode(DP, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}
void loop() {

  // 9
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

  delay(delayTime);

  // 8 
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  
  delay(delayTime);

  // 7
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  
  delay(delayTime);

  //6   digitalWrite(DP,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

  delay(delayTime);

  // 5
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

  delay(delayTime);

  // 4
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

  delay(delayTime);

  // 3
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  
  delay(delayTime);

  // 2
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  
  delay(delayTime);

  // 1
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  
  delay(delayTime);



}