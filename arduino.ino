const int pinFotoresistencia = A0; 
void setup() {
  Serial.begin(9600); 
}
void loop() {
  int valorFotoresistencia = analogRead(pinFotoresistencia); 
  Serial.print("Luz: ");
  Serial.print(valorFotoresistencia);
  delay(1000);
  }
