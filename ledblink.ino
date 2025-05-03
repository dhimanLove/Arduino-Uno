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

// This code blinks an LED connected to pin 9 on the Arduino board. The LED will turn on for 1 second and then turn off for 1 second, repeating this cycle indefinitely. The Serial Monitor is initialized at a baud rate of 9600, but it is not used in this simple example. You can connect the LED with a current-limiting resistor to prevent damage to the LED and the Arduino board.
// Make sure to connect the LED's anode (longer leg) to pin 9 and the cathode (shorter leg) to ground.
