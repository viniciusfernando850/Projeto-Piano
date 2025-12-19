const int BUZZER_PIN = 8;

const int BUTTONS[] = {11, 12, 13};

const int LED_RED = 2;
const int LED_YELLOW = 3;
const int LED_GREEN = 4;

const int LEDS[] = {LED_RED, LED_YELLOW, LED_GREEN};

// Frequência de cada nota musical
const int C = 261; // Dó
const int D = 293; // Ré
const int E = 329; // Mi
const int F = 349; // Fá
const int G = 391; // Sol
const int A = 440; // Lá
const int B = 493; // Si

const int NOTAS[] = {C, D, E};


// Função para tocar a nota correspondente
void tocarNota(int nota, int pinLED) {
  tone(BUZZER_PIN, nota);
  digitalWrite(pinLED, HIGH);

}

// Função para parar de tocar qualquer nota
void soltarNota() {
  noTone(BUZZER_PIN);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);

}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  for (int i = 0; i < 3; i++) {
    pinMode(BUTTONS[i], INPUT_PULLUP);
    pinMode(LEDS[i], OUTPUT);
  }

}

void loop() {
  bool tocando = false;

  // Toca a nota quando o respectivo botão é pressionado
  for (int i = 0; i < 3; i++) {
    if (digitalRead(BUTTONS[i]) == LOW) {
      tocarNota(NOTAS[i], LEDS[i]);
      tocando = true;
      break;
    }
  }

  if (!tocando)
    soltarNota();

}
