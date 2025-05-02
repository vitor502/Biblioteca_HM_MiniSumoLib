# 🏆 HM_MiniSumoLib

**HM_MiniSumoLib** é uma biblioteca em C++ desenvolvida para a plataforma Arduino IDE, focada no controle de robôs da categoria Mini Sumô usando o microcontrolador ESP32 WROOM e a ponte H Toshiba TB6612FNG.

Ela oferece uma interface simples para controlar motores DC de 12V, permitindo implementar movimentos básicos (frente, ré, curvas, frenagem) e avançados (aceleração progressiva, inversão de motores, controle com sensores) com poucos comandos.

## ✨ Funcionalidades

- ✅ **Inicialização automática** dos pinos e canais PWM
- ✅ **Controle de movimento**: frente, ré, esquerda, direita, curvas em ré
- ✅ **Frenagem** e **desligamento** imediato dos motores
- ✅ **Aceleração progressiva** para evitar solavancos
- ✅ **Inversão de direção** para motores montados em espelho
- ✅ **Integração com sensores** (borda e detecção de oponente)
- ✅ **Monitoramento e feedback** via Serial

## 🔧 Especificações técnicas

- **Microcontrolador**: ESP32 WROOM
- **Driver de motor**: TB6612FNG
- **Tensão dos motores**: 12V DC
- **Frequência PWM**: 3600 Hz
- **Resolução PWM**: 8 bits (0–255)
- **Pinos usados**:
  - AIN1 (GPIO 18), AIN2 (GPIO 5), PWMA (GPIO 22)
  - BIN1 (GPIO 19), BIN2 (GPIO 21), PWMB (GPIO 23)

## 📦 Como usar

1️⃣ Instale a biblioteca via Arduino IDE (**Sketch > Incluir Biblioteca > Adicionar Biblioteca .ZIP...**)

2️⃣ Inclua no seu código:
  
   #include <HM_MiniSumoLib.h>

3️⃣ Inicialize no setup():

hm.Start();

4️⃣ Controle os motores no loop():

hm.MoveForward(255, 255);

hm.SetBreakMotors();

hm.ShutdownMotors();

##💡 Exemplos incluídos

O repositório traz exemplos prontos para rodar, facilitando o teste e a integração no seu robô.

## 📝 Licença

Este projeto é licenciado sob a [MIT License](https://opensource.org/licenses/MIT).
