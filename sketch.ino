const int ledPin = 9;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, HIGH);   
    delay(1000);            
    digitalWrite(ledPin, LOW);   
    delay(1000);                  
}
