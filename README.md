# HM_MiniSumoLib

A **HM_MiniSumoLib** é uma biblioteca para Arduino IDE voltada para o controle de motores DC usando o ESP32 com a ponte H TB6612FNG, projetada especialmente para robôs Mini Sumô e Cupim.

## Conteúdo do pacote

- `HM_MiniSumoLib.h` — Arquivo de cabeçalho da biblioteca.
- `HM_MiniSumoLib.cpp` — Implementação da biblioteca.
- `ExampleSketch/ExampleSketch.ino` — Sketch de exemplo mostrando como usar a biblioteca.

## Como instalar

1. Baixe o arquivo `.zip` deste pacote.
2. No Arduino IDE, vá em **Sketch > Incluir Biblioteca > Adicionar Biblioteca .ZIP...**
3. Selecione o arquivo `.zip` baixado.
4. A biblioteca será adicionada à sua lista de bibliotecas.

## Como usar

1. Abra o Arduino IDE.
2. Vá em **Arquivo > Exemplos > HM_MiniSumoLib > ExampleSketch**.
3. Conecte seu ESP32 à porta USB.
4. Compile e envie o código para a placa.

O exemplo incluído realiza a seguinte sequência:
- Move para frente por 1 segundo.
- Freia por 0,5 segundo.
- Move para trás por 1 segundo.
- Gira para a esquerda por 1 segundo.
- Gira para a direita por 1 segundo.
- Desliga os motores por 2 segundos.

## Especificações técnicas

- Pinos usados:
  - AIN1: GPIO 18
  - AIN2: GPIO 5
  - PWMA: GPIO 22
  - BIN1: GPIO 19
  - BIN2: GPIO 21
  - PWMB: GPIO 23

- Frequência PWM: 3600 Hz
- Resolução PWM: 8 bits

## Requisitos

- ESP32 WROOM
- Ponte H TB6612FNG
- Arduino IDE instalado