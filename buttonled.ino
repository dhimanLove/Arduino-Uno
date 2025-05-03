const int buttonPin = 2;
const int ledPin = 9;
bool ledState = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(200);
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    while (digitalRead(buttonPin) == LOW);
  }
}
