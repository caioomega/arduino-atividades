// Acende 9 LEDs em espiral, começando do meio e abrindo para as pontas
//
// Montagem (cada LED com seu resistor de 220 ohms até o GND):
//   LEDs em linha, da esquerda para a direita, nos pinos 2 a 10
//   (vermelho, amarelo, verde, vermelho, amarelo, verde, vermelho, amarelo, verde)
//
// Ordem da espiral (posição na linha, 1 = LED da esquerda):
//   5 -> 4 -> 6 -> 3 -> 7 -> 2 -> 8 -> 1 -> 9

const int PINOS[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // LEDs da esquerda para a direita
const int TOTAL = 9;
const int MEIO = TOTAL / 2;   // índice do LED do meio (o 5º)
const int TEMPO = 150;        // tempo entre um LED e outro, em milissegundos

void setup() {
  for (int i = 0; i < TOTAL; i++) {
    pinMode(PINOS[i], OUTPUT);
  }
}

// Devolve o índice do LED do passo "passo" da espiral:
// passo 0 = meio, 1 = um à esquerda, 2 = um à direita, 3 = dois à esquerda...
int ledDaEspiral(int passo) {
  if (passo == 0) {
    return MEIO;
  }
  int distancia = (passo + 1) / 2;
  if (passo % 2 == 1) {
    return MEIO - distancia; // passos ímpares vão para a esquerda
  }
  return MEIO + distancia;   // passos pares vão para a direita
}

void loop() {
  // abre a espiral: acende do meio para as pontas
  for (int passo = 0; passo < TOTAL; passo++) {
    digitalWrite(PINOS[ledDaEspiral(passo)], HIGH);
    delay(TEMPO);
  }
  delay(500);

  // fecha a espiral: apaga das pontas de volta para o meio
  for (int passo = TOTAL - 1; passo >= 0; passo--) {
    digitalWrite(PINOS[ledDaEspiral(passo)], LOW);
    delay(TEMPO);
  }
  delay(500);
}
