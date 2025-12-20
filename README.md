# Protótipo de Piano
<p align="justify">Este projeto é dividido em duas partes. A primeira fase, tem como objetivo simular o funcionamento de um piano, integrando o uso de um buzzer, LEDs e botões. Já a segunda parte foi programada de modo que o buzzer possa reproduzir a canção Asa Branca de Luiz Gonzaga. </p>
  
<br>

<p align="justify">A sinalização destinada aos veículos segue o modelo tradicional utilizado no trânsito: vermelho (pare), amarelo (atenção) e verde (siga), respeitando tempos pré-definidos para cada estado. Já a sinalização para pedestres opera de forma sincronizada com o semáforo veicular. </p>

<br>

<p align="justify">Além do funcionamento convencional, o sistema de pedestres inclui um alerta visual, no qual o LED vermelho pisca antes do encerramento do período de travessia, indicando que o sinal está prestes a fechar. Esse comportamento aproxima a simulação do funcionamento real dos semáforos urbanos. </p>

---
# Montagem - Piano

## Componentes utilizados
  - Arduino Uno (1x)
  - LED Verde 5 mm (1x)
  - LED Vermelho 5 mm (1x)
  - LED Amarelo 5 mm (1x)
  - Resistor 300 Ω (3x)
  - Buzzer Passivo 5 V (1x)
  - Chave Momentânea (PushButton) (3x)
  - Protoboard (1x)
  - Jumpers

---
## Esquemático do Circuito
<p align="center">
  <img src="images/esquematico-piano.png" alt="Esquemático do Circuito" width="800">
</p>

<br>

**Legenda:**
  - D2 -> LED Vermelho
  - D3 -> LED Amarelo
  - D4 -> LED Verde
  - D8 -> Buzzer (+)
  - D11 -> Botão 01
  - D12 -> Botão 02
  - D13 -> Botão 03
  - Resistores: 300 Ω

---
## Montagem e Funcionamento
<p align="center">
  <img src="images/panoramica-piano.jpg" alt="Montagem do Circuito"  width="800" height="400">
</p>

<br>

🎥 **Vídeo do Funcionamento:**  
👉 [Acesse clicando aqui!](https://youtu.be/SsBZyAJXiDw)

---
## Código do Projeto
Quer ver como esse projeto foi programado?  
👉 [Acesse o código clicando aqui!](src/Piano.ino)

---
# Montagem - Asa Branca

## Componentes utilizados
  - Arduino Uno (1x)
  - LED Verde 5 mm (1x)
  - Resistor 300 Ω (1x)
  - Buzzer Passivo 5 V (1x)
  - Chave Momentânea (PushButton) (1x)
  - Protoboard (1x)
  - Jumpers

---
## Esquemático do Circuito
<p align="center">
  <img src="images/esquematico-asa-branca.png" alt="Esquemático do Circuito" width="800">
</p>

<br>

**Legenda:**
  - D2 -> LED Verde
  - D8 -> Buzzer (+)
  - D12 -> Botão
  - Resistor: 300 Ω

---
## Montagem e Funcionamento
<p align="center">
  <img src="images/superior-asa-branca.jpg" alt="Montagem do Circuito"  width="800" height="400">
</p>

<br>

🎥 **Vídeo do Funcionamento:**  
👉 [Acesse clicando aqui!](https://youtu.be/SsBZyAJXiDw)

---
## Código do Projeto
Quer ver como esse projeto foi programado?  
👉 [Acesse o código clicando aqui!](src/AsaBranca.ino)
