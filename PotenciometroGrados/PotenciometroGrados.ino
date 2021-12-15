int Analogico = A0;
float valor;
float volts;

void setup() {
  Serial.begin(300);
}

void loop() {
  valor = analogRead(Analogico);
if(valor>0){
  Serial.println("El valor es :");
  Serial.println(valor);
  delay(1000);
}
}
