// Liga o LED enquanto o botão está pressionado e desliga quando solta
//
// Montagem:
//   LED:   Pino 12 do Arduino -> resistor de 220 ohms -> perna LONGA do LED (+)
//          Perna CURTA do LED (-) -> GND do Arduino
//   Botão: uma perna -> 5V do Arduino
//          outra perna -> Pino 2 do Arduino
//          e um resistor (10k) do Pino 2 -> GND (resistor pull-down)

const int PINO_LED = 12;
const int PINO_BOTAO = 2;

void setup() {
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_BOTAO, INPUT);
  Serial.begin(9600);
}

void loop() {
  // com o resistor pull-down o botão lê HIGH quando está pressionado
  int estado = digitalRead(PINO_BOTAO);

  // mostra no Monitor Serial o que o Arduino está lendo do botão
  Serial.println(estado == HIGH ? "pressionado" : "solto");

  if (estado == HIGH) {
    digitalWrite(PINO_LED, HIGH); // pressionado: liga
  } else {
    digitalWrite(PINO_LED, LOW);  // solto: desliga
  }
}
