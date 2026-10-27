// Desafio: semáforo duplo com 6 LEDs
//
// Montagem (cada LED com seu resistor de 220 ohms até o GND):
//   Semáforo 1: vermelho -> pino 2, amarelo -> pino 3, verde -> pino 4
//   Semáforo 2: vermelho -> pino 5, amarelo -> pino 6, verde -> pino 7


const int verm1 = 2, amar1 = 3, verd1 = 4;  // semáforo 1
const int verm2 = 5, amar2 = 6, verd2 = 7;  // semáforo 2


const int tempoVerde = 5000;    // 5 segundos
const int tempoAmarelo = 2000;  // 2 segundos


void setup() {
  for (int pino = 2; pino <= 7; pino++) {
    pinMode(pino, OUTPUT);
  }
}


// liga só os LEDs indicados e apaga o resto
void definirEstado(bool v1, bool a1, bool g1, bool v2, bool a2, bool g2) {
  digitalWrite(verm1, v1);
  digitalWrite(amar1, a1);
  digitalWrite(verd1, g1);
  digitalWrite(verm2, v2);
  digitalWrite(amar2, a2);
  digitalWrite(verd2, g2);
}


void loop() {
  // 1 verde, 2 vermelho
  definirEstado(LOW, LOW, HIGH, HIGH, LOW, LOW);
  delay(tempoVerde);


  // 1 amarelo, 2 continua vermelho
  definirEstado(LOW, HIGH, LOW, HIGH, LOW, LOW);
  delay(tempoAmarelo);


  // 1 vermelho, 2 verde
  definirEstado(HIGH, LOW, LOW, LOW, LOW, HIGH);
  delay(tempoVerde);


  // 2 amarelo, 1 continua vermelho
  definirEstado(HIGH, LOW, LOW, LOW, HIGH, LOW);
  delay(tempoAmarelo);
}
