int ledPin = 13;

int tempoAceso = 2000;
int tempoApagado = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  delay(tempoAceso);         

  digitalWrite(ledPin, LOW);
  delay(tempoApagado);       
}
