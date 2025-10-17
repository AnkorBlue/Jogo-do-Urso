const int trigPin = 12;
const int echoPin = 13;
long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Envia pulso
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Recebe tempo de retorno
  duration = pulseIn(echoPin, HIGH);

  // Converte tempo em distância
  distance = duration * 0.034 / 2;

  // Verifica distância entre 40cm e 60cm
  if (distance > 40 && distance < 60) {
    Serial.println("pulo");
    delay(500);  // Pausa para evitar múltiplos sinais rápidos
  }
}
