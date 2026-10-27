# 03 · Semáforo duplo

Dois semáforos de um cruzamento funcionando juntos: quando um está verde, o outro está vermelho.

▶️ [Ver o vídeo funcionando](demo.mov)

## Montagem

Cada LED vai do pino até um resistor de 220 Ω, e do resistor até o GND.

| Semáforo | Vermelho | Amarelo | Verde |
|----------|:--------:|:-------:|:-----:|
| 1 | pino 2 | pino 3 | pino 4 |
| 2 | pino 5 | pino 6 | pino 7 |

## Ciclo

| Fase | Semáforo 1 | Semáforo 2 | Tempo |
|------|-----------|-----------|-------|
| 1 | 🟢 verde | 🔴 vermelho | 5 s |
| 2 | 🟡 amarelo | 🔴 vermelho | 2 s |
| 3 | 🔴 vermelho | 🟢 verde | 5 s |
| 4 | 🔴 vermelho | 🟡 amarelo | 2 s |

Depois da fase 4 o ciclo recomeça.

## Como funciona

- Um `for` configura os pinos 2 a 7 como saída de uma vez.
- A função `definirEstado(...)` recebe o estado dos 6 LEDs e liga só os que devem ficar acesos, então cada fase do ciclo é uma linha só no `loop()`.
- `tempoVerde` e `tempoAmarelo` controlam quanto tempo cada fase dura.
