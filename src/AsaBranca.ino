/*************************************
        Projeto 2 - Asa Branca
*************************************/

const int BUTTON = 12;
const int BUZZER_PIN = 8;
const int LED_PIN = 2;

// Frequência de cada nota musical
const int C = 261; // Dó
const int D = 293; // Ré
const int E = 329; // Mi
const int F = 349; // Fá
const int G = 391; // Sol
const int A = 440; // Lá
const int B = 493; // Si

// Vetores que compõem a música
int music[] = {C, D, E, G, G, E, F, F, 0, C, D, E, G, G, F, E, 0, C, C, D, E, G, 0, G, F, E, C, F, 0,
               F, E, D, D, E, 0, D, D, C, C, 0};

int tempos[] = {4, 4, 2, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 2, 2, 1, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 4, 
                4, 4, 4, 2, 2, 4, 4, 4, 4, 1, 6};

// Variáveis e constantes úteis
const int tempo = 1000;
int tamanho = 0;
bool parada;


// Função que inicia a música
void iniciarMusica() {
  for (int i = 0; i < tamanho; i++) {
    if (music[i] == 0) {
      noTone(BUZZER_PIN);
      digitalWrite(LED_PIN, LOW);
      
    } else {
      tone(BUZZER_PIN, music[i]);
      digitalWrite(LED_PIN, HIGH);

    }

    delay(tempos[i]);

    if (digitalRead(BUTTON) == LOW) {
      pararMusica();    // A música pode parar em qualquer momento
      break;
    }
  }

}

// Função que encerra a música e desliga o LED
void pararMusica() {
  noTone(BUZZER_PIN);
  digitalWrite(LED_PIN, LOW);
  parada = true;

}

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  tamanho = sizeof(music) / sizeof(music[0]);

  for (int i = 0; i < tamanho; i++)
    tempos[i] = tempo/tempos[i];

}

void loop() {
  parada = false;

  if (digitalRead(BUTTON) == LOW) {
    delay(1000);

    while (true) {
      iniciarMusica();
      delay(500);

      if (parada)
        break;
    } 
  }

}
