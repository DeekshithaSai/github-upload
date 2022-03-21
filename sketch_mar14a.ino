#define R1 13
#define Y1 12
#define G1 11
#define R2 10
#define Y2 9
#define G2 8
#define R3 7
#define Y3 6
#define G3 5
#define R4 4
#define Y4 3
#define G4 2
 

#define p1 a0
#define p2 a1
#define p3 a2
#define p4 a3

float IR1=0;
float IR2=0;
float IR3=0;
float IR4=0;


void setup() {
  
pinMode(R1,OUTPUT);
pinMode(Y1,OUTPUT);
pinMode(G1,OUTPUT);

pinMode(R2,OUTPUT);
pinMode(Y2,OUTPUT);
pinMode(G2,OUTPUT);

pinMode(R3,OUTPUT);
pinMode(Y3,OUTPUT);
pinMode(G3,OUTPUT);

pinMode(R4,OUTPUT);
pinMode(Y4,OUTPUT);
pinMode(G4,OUTPUT);

pinMode(P1,INPUT);
pinMode(P2,INPUT);
pinMode(P3,INPUT);
pinMode(P4,INPUT);

}

void loop() {
 
 IR1=analogRead(p1);
 IR2=analogRead(p2);
 IR3=analogRead(p3);
 IR4=analogRead(p4);

Serial.begin(9600);
Serial.println(IR1);
Serial.println(IR2);
Serial.println(IR3);
Serial.println(IR4);

 if(IR1<100)
{
 digitalWrite(G1,HIGH);
 digitalWrite(Y1,LOW);
  digitalWrite(R1,LOW);
  
  digitalWrite(R2,HIGH);
  digitalWrite(Y1,LOW);
   digitalWrite(G2,LOW);
   
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
   digitalWrite(G3,LOW);
   
  digitalWrite(R4,HIGH);
 digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
 
}

 else if(IR2<100)
 { digitalWrite(G1,LOW);
 digitalWrite(Y1,LOW);
  digitalWrite(R1,HIGH);
  
  digitalWrite(R2,LOW);
  digitalWrite(Y1,LOW);
   digitalWrite(G2,HIGH);
   
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
   digitalWrite(G3,LOW);
   
  digitalWrite(R4,HIGH);
 digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
 delay(10000);
}

else if(IR3<100)
 {digitalWrite(G1,LOW);
 digitalWrite(Y1,LOW);
  digitalWrite(R1,HIGH);
  
  digitalWrite(R2,HIGH);
  digitalWrite(Y1,HIGH);
   digitalWrite(G2,LOW);
   
  digitalWrite(R3,LOW);
  digitalWrite(Y3,LOW);
   digitalWrite(G3,HIGH);
   
  digitalWrite(R4,LOW);
 digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
 delay(10000);
 }

  else if(IR4<100)
{digitalWrite(G1,LOW);
 digitalWrite(Y1,LOW);
  digitalWrite(R1,HIGH);  
  digitalWrite(R2,HIGH);
  digitalWrite(Y1,LOW);
   digitalWrite(G2,HIGH);
   
  digitalWrite(R3,LOW);
  digitalWrite(Y3,LOW);
   digitalWrite(G3,LOW):
   
  digitalWrite(R4,HIGH):
 digitalWrite(Y4,LOW):
  digitalWrite(G4,LOW):
 delay(10000);
}
}
else
{
 digitalWrite(R1,LOW);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW):
  digitalWrite(G2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(10000);
  
  digitalWrite(R1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(Y1,HIGH);
   delay(500);
  digitalWrite(Y1,LOW);
   delay(500);
  digitalWrite(Y1,HIGH);
   delay(500);
  digitalWrite(Y1,LOW);
  delay(500):
  digitalWrite(Y1,HIGH);
  delay(500);
  digitalWrite(Y1,LOW);
  
  
  delay(500);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(1500);


  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(10000);
   
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(Y2,HIGH);
   delay(500);
  digitalWrite(Y2,LOW);
  delay(500);
  digitalWrite(Y2,HIGH);
   delay(500);
  digitalWrite(Y2,LOW);
  delay(500);
  digitalWrite(Y2,HIGH);
   delay(500);
  digitalWrite(Y2,LOW);
   delay(500);
  digitalWrite(Y2,HIGH);
 delay(500);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(1500);


  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(10000);


  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(Y3,HIGH);
   delay(500);
   digitalWrite(Y3,LOW);
   delay(500);
  digitalWrite(Y3,HIGH);
  delay(500);
  digitalWrite(Y3,LOW);
   delay(500);
    digitalWrite(Y3,HIGH);
  delay(500);
   digitalWrite(Y3,LOW);
   delay(500);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW); 
  delay(1500);

  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,HIGH);
  delay(10000);

 
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(G4,LOW);
  digitalWrite(Y4,LOW);
  delay(500);
  digitalWrite(Y4,HIGH);
  delay(500);
  digitalWrite(Y4,LOW);
  delay(500);
  digitalWrite(Y4,HIGH);
  delay(500);
   digitalWrite(Y4,LOW);
  delay(500):
  digitalWrite(Y4,HIGH);
  delay(500):
  digitalWrite(G4,LOW);
  delay(1500):
  digitalWrite(R1,HIGH);
  digitalWrite(Y1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(Y2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,HIGH);
  digitalWrite(Y3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,HIGH);
  digitalWrite(Y4,LOW);
  digitalWrite(G4,LOW);
  delay(10000);

}
}
