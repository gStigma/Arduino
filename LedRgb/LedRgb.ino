
int LedG = 1;
int LedR = 2;
int LedB = 3;
float band = 1.0;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(LedG,OUTPUT);
  pinMode(LedR,OUTPUT);
  pinMode(LedB,OUTPUT);
       
}

void loop() {
  // put your main code here, to run repeatedly:
  while(band == 1.0){
    digitalWrite(LedG,HIGH);
    delay(500);
    digitalWrite(LedG,LOW);
    digitalWrite(LedR,HIGH);
    delay(500);
    digitalWrite(LedR,LOW);
    digitalWrite(LedB,HIGH);
    delay(500);
    digitalWrite(LedB,LOW);
  }
} 
