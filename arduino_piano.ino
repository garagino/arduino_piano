/* 
Projeto de mini piano
Baseado em https://projecthub.arduino.cc/rahulkhanna/arduino-tutorial-mini-piano-0c7ec5
Foi realizado a adição de 5 teclas, correspondentes à teclas pretas do piano, correspondentes aos semitons (sustenidos/bemol)
Foi utilizado um alto falante para reprodução dos sons
Uma bateria de 9v é utilizada para fornecer energia
*/

#define T_C 262
#define T_CS 277
#define T_D 294
#define T_DS 311
#define T_E 330
#define T_F 349
#define T_FS 370
#define T_G 392
#define T_GS 415
#define T_A 440
#define T_AS 466
#define T_B 493


const int C  =  0;
const int CS =  1;
const int D  =  2;
const int DS =  3;
const int E  =  4;
const int F  =  5;
const int FS =  6;
const int G  =  7;
const int GS =  8;
const int A  =  9;
const int AS = 10;
const int B  = 11;

const int Buzz = 13;

void setup()
{

  //Serial.begin(9600);
  //pinMode(11, OUTPUT)
  
  //pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);

  pinMode(CS, INPUT);
  digitalWrite(CS,HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  
  pinMode(DS, INPUT);
  digitalWrite(DS,HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);

  pinMode(FS, INPUT);
  digitalWrite(FS,HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);

  pinMode(GS, INPUT);
  digitalWrite(GS,HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);

  pinMode(AS, INPUT);
  digitalWrite(AS,HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);

  // digitalWrite(LED,LOW);
}

void loop()
{

  while(digitalRead(C) == LOW)
  {
    tone(Buzz,T_C);
  }

  while(digitalRead(CS) == LOW)
  {
    tone(Buzz,T_CS);
  }

  while(digitalRead(D) == LOW)
  {
    tone(Buzz,T_D);
  }

  while(digitalRead(DS) == LOW)
  {
    tone(Buzz,T_DS);
  }

  while(digitalRead(E) == LOW)
  {
    tone(Buzz,T_E);
  }

  while(digitalRead(F) == LOW)
  {
    tone(Buzz,T_F);
  }

  while(digitalRead(FS) == LOW)
  {
    tone(Buzz,T_FS);
  }

  while(digitalRead(G) == LOW)
  {
    tone(Buzz,T_G);
  }

  while(digitalRead(GS) == LOW)
  {
    tone(Buzz,T_GS);
  }

  while(digitalRead(A) == LOW)
  {
    tone(Buzz,T_A);
  }

  while(digitalRead(AS) == LOW)
  {
    tone(Buzz,T_AS);
  }

  while(digitalRead(B) == LOW)
  {
    tone(Buzz,T_B);
  }

  noTone(Buzz);

}
