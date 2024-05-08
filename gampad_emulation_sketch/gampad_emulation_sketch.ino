#include <XInput.h>

void setup() {
  Serial.begin(9600);  // Inizia la comunicazione seriale a 9600 bps
  XInput.begin();      // Inizializza la libreria XInput
}

void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();  // Leggi il carattere ricevuto dalla seriale

    switch(comando) {
      // Comandi per premere i tasti
      case 'a': XInput.press(BUTTON_A); break;
      case 'b': XInput.press(BUTTON_B); break;
      case 'x': XInput.press(BUTTON_X); break;
      case 'y': XInput.press(BUTTON_Y); break;
      case 'u': XInput.press(BUTTON_DPAD_UP); break;
      case 'd': XInput.press(BUTTON_DPAD_DOWN); break;
      case 'l': XInput.press(BUTTON_DPAD_LEFT); break;
      case 'r': XInput.press(BUTTON_DPAD_RIGHT); break;
      case 's': XInput.press(BUTTON_START); break;
      case 'k': XInput.press(BUTTON_BACK); break;
      case '1': XInput.press(BUTTON_LB); break;
      case '2': XInput.press(BUTTON_RB); break;
      case 't': XInput.press(BUTTON_LTHUMB); break;
      case 'h': XInput.press(BUTTON_RTHUMB); break;

      // Comandi per rilasciare i tasti
      case 'A': XInput.release(BUTTON_A); break;
      case 'B': XInput.release(BUTTON_B); break;
      case 'X': XInput.release(BUTTON_X); break;
      case 'Y': XInput.release(BUTTON_Y); break;
      case 'U': XInput.release(BUTTON_DPAD_UP); break;
      case 'D': XInput.release(BUTTON_DPAD_DOWN); break;
      case 'L': XInput.release(BUTTON_DPAD_LEFT); break;
      case 'R': XInput.release(BUTTON_DPAD_RIGHT); break;
      case 'S': XInput.release(BUTTON_START); break;
      case 'K': XInput.release(BUTTON_BACK); break;
      case '1': XInput.release(BUTTON_LB); break;
      case '2': XInput.release(BUTTON_RB); break;
      case 'T': XInput.release(BUTTON_LTHUMB); break;
      case 'H': XInput.release(BUTTON_RTHUMB); break;
    }

    XInput.send();  // Aggiorna lo stato del controller
  }
}
