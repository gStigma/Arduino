const int sensorPin = A0;      // Constante para leer de una entrada analógica del sensor
float sensorValor = 0;         // Variable pra poder leer decimales
float sensorValorGrados = 0;   // Variable para guardar los grados

void setup() {
  Serial.begin(9600);          //
}

void loop() {
  sensorValor = analogRead(sensorPin);                            //  Lee la entrada analogica del arduino
  sensorValor = sensorValor*100/1023;                             //  Calcula la posicion de potenciometro
  sensorValorGrados = map(sensorValor, 0, 100, 0, 290);           //  Funcion de mapeo o conversion [5 datos]
                                                                      //  1.-  Variable a mapear
                                                                      //  2.-  Valor minimo de la variable a mapear (porcentaje)
                                                                      //  3.-  Valor maximo de la variable a mapear (porcentaje)
                                                                      //  4.-  Valor minimo de la nueva variable (grados)
                                                                      //  5.-  Valor maximo de la nueva variable (grados)
  Serial.println("----------------------");
  Serial.print("Porcentaje de Giro: ");
  Serial.print(sensorValor);
  Serial.println("%");
  Serial.println("----------------------");
  Serial.print("Porcentaje en Grados: ");
  Serial.print(sensorValorGrados);
  Serial.print("*");
  Serial.println("----------------------");
  Serial.println("");
  delay(1000);

}
