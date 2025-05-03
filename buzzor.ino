const int buttonPin = 2;
const int ledPin = 7;
const int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 4000);
    delay(400);
    digitalWrite(ledPin,HIGH);
    noTone(buzzerPin);
    delay(200);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}
//the code for the buzzer and led is written in the loop function. The code checks the state of the button connected to pin 2. If the button is pressed (HIGH), it turns on the LED connected to pin 7 and plays a tone on the buzzer connected to pin 8. The tone lasts for 400 milliseconds, followed by a short delay before turning off the buzzer and LED. If the button is not pressed, it turns off the LED and stops the buzzer.
this code is related to my linkedin post on 04-05-2025