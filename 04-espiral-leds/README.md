# 04 · Espiral de LEDs

Nove LEDs em linha acendem em espiral: começa pelo LED do meio e vai abrindo, um para cada lado, até acender todos. Depois apagam no caminho inverso, das pontas de volta para o meio.

## Montagem

Cada LED vai do pino até um resistor de 220 Ω, e do resistor até o GND.

| Posição (esq. → dir.) | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Cor | 🔴 | 🟡 | 🟢 | 🔴 | 🟡 | 🟢 | 🔴 | 🟡 | 🟢 |
| Pino | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |

## Ordem da espiral

```
acende:  5 → 4 → 6 → 3 → 7 → 2 → 8 → 1 → 9
apaga:   9 → 1 → 8 → 2 → 7 → 3 → 6 → 4 → 5
```

## Como funciona

- Os pinos ficam num vetor `PINOS[]`, na ordem em que os LEDs estão no protoboard.
- A função `ledDaEspiral(passo)` calcula qual LED vem em cada passo: o passo 0 é o do meio, os passos ímpares vão para a esquerda e os pares para a direita, cada vez um pouco mais longe.
- Um `for` acende os LEDs nessa ordem e outro `for`, de trás para frente, apaga.
- `TEMPO` controla a velocidade da espiral.

## Problemas comuns

- **Só alguns LEDs acendem:** o GND não está chegando em todos. Em protoboards compridos a trilha azul (−) é cortada no meio, então ligue as duas metades com um jumper e confira se todos os LEDs vão para a mesma trilha do fio de GND.

- **A ordem saiu bagunçada:** algum fio está num pino diferente. Corrija o vetor `PINOS[]` para ficar na mesma ordem dos LEDs no protoboard.
