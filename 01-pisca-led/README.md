# 01 · Pisca LED

O LED fica meio segundo aceso e meio segundo apagado, sem parar.

▶️ [Ver o vídeo funcionando](demo.mov)

## Montagem

| De | Para |
|----|------|
| Pino 12 | Resistor de 220 Ω |
| Resistor | Perna **longa** do LED (+) |
| Perna **curta** do LED (−) | GND |

## Como funciona

- `pinMode(PINO_LED, OUTPUT)` configura o pino 12 como saída.
- No `loop()`, `digitalWrite` liga (`HIGH`) e desliga (`LOW`) o LED.
- `delay(TEMPO)` espera entre um e outro. Mude `TEMPO` para piscar mais rápido (`200`) ou mais devagar (`1000`).

## Problemas comuns

- **Não acende:** o LED pode estar invertido. Vire ele.
- **Nada acontece:** confira se o resistor e o LED estão na mesma fileira do protoboard.
