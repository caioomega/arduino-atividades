// Pisca um LED no protoboard
//
// Montagem:
//   Pino 12 do Arduino -> resistor de 220 ohms -> perna LONGA do LED (+)
//   Perna CURTA do LED (-) -> GND do Arduino

const int PINO_LED = 12;
const int TEMPO = 500; // em milissegundos (500 = meio segundo)

void setup() {
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  digitalWrite(PINO_LED, HIGH); // liga o LED
  delay(TEMPO);
  digitalWrite(PINO_LED, LOW);  // desliga o LED
  delay(TEMPO);
}
