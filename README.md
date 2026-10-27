# Atividades de Arduino

Projetos das aulas de Arduino, do primeiro LED piscando até um semáforo duplo. Cada atividade tem o código, o esquema de montagem e um vídeo dela funcionando.

| # | Atividade | O que faz | Conceitos |
|---|-----------|-----------|-----------|
| 01 | [Pisca LED](01-pisca-led) | Pisca um LED a cada meio segundo | `pinMode`, `digitalWrite`, `delay` |
| 02 | [Botão e LED](02-botao-led) | Acende o LED enquanto o botão está apertado | `digitalRead`, resistor pull-down, Monitor Serial |
| 03 | [Semáforo duplo](03-semaforo-duplo) | Dois semáforos sincronizados com 6 LEDs | funções, ciclos de estado, `for` |
| 04 | [Espiral de LEDs](04-espiral-leds) | 9 LEDs acendem em espiral a partir do meio | vetores, cálculo de índice, `for` ao contrário |

## Material

- Arduino Uno
- Protoboard e jumpers
- LEDs (vermelho, amarelo e verde)
- Resistores de 220 Ω (um por LED)
- Botão de 4 pernas e resistor de 10 kΩ

## Como rodar

### Pelo Arduino IDE

1. Abra o arquivo `.ino` da atividade (por exemplo `01-pisca-led/01-pisca-led.ino`).
2. Em **Ferramentas → Placa**, escolha **Arduino Uno**.
3. Em **Ferramentas → Porta**, escolha a porta COM do Arduino.
4. Clique em **Carregar** (a seta →).

### Pelo terminal (arduino-cli)

```bash
arduino-cli compile --fqbn arduino:avr:uno 01-pisca-led
arduino-cli upload -p COM8 --fqbn arduino:avr:uno 01-pisca-led
```

Troque `COM8` pela porta que aparece em `arduino-cli board list`.

## Estrutura

```
Arduino-atividades/
├── 01-pisca-led/
│   ├── 01-pisca-led.ino
│   ├── demo.mov
│   └── README.md
├── 02-botao-led/
│   ├── 02-botao-led.ino
│   ├── demo.mov
│   └── README.md
├── 03-semaforo-duplo/
│   ├── 03-semaforo-duplo.ino
│   ├── demo.mov
│   └── README.md
└── 04-espiral-leds/
    ├── 04-espiral-leds.ino
    └── README.md
```

Cada pasta tem o mesmo nome do `.ino` porque o Arduino IDE exige isso para abrir o sketch.
