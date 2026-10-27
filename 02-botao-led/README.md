# 02 · Botão e LED

O LED acende enquanto o botão está apertado e apaga quando solta.

▶️ [Ver o vídeo funcionando](demo.mov)

## Montagem

**LED**

| De | Para |
|----|------|
| Pino 12 | Resistor de 220 Ω → perna **longa** do LED |
| Perna **curta** do LED | GND |

**Botão (com resistor pull-down)**

| De | Para |
|----|------|
| Uma perna do botão | 5V |
| Perna oposta do botão (na diagonal) | Pino 2 |
| Pino 2 | Resistor de 10 kΩ → GND |

O botão fica atravessando o canal do meio do protoboard.

## Como funciona

- O resistor de 10 kΩ "puxa" o pino 2 para o GND, então com o botão **solto** ele lê `LOW`.
- Quando o botão é **apertado**, o 5V chega no pino 2 e ele lê `HIGH`.
- O código liga o LED quando lê `HIGH` e desliga quando lê `LOW`.
- O estado também aparece no **Monitor Serial** (9600 baud) como `pressionado` ou `solto`, o que ajuda a achar erro de montagem.

## Problemas comuns

- **LED sempre aceso:** abra o Monitor Serial. Se mostrar `pressionado` o tempo todo, o pino 2 está recebendo 5V direto. Gire o botão 90° no protoboard.
- **LED nunca acende:** confira o fio do 5V e se o botão está atravessando o canal do meio.
