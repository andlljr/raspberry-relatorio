const int buttonPins[] = {11, 10, 6, 5};
bool buttonState[4] = {false, false, false, false};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    // Read the state of each button
    buttonState[i] = digitalRead(buttonPins[i]) == 0;

    if (buttonState[i]) {
      // Print a message based on the button that is pressed
      switch (i) {
        case 0:
          Serial.println("Ola");
          break;
        case 1:
          Serial.println("Hola");
          break;
        case 2:
          Serial.println("Hello");
          break;
        case 3:
          Serial.println("Konnichiwa");
          break;
      }
    }
  }
}
