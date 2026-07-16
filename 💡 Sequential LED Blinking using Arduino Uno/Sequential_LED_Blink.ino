// Sequential LED Blinking using Arduino Uno

// LED pin definitions
const int blueLED = 13;
const int greenLED = 12;
const int redLED = 11;

void setup() {
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {

  // Blue LED
  digitalWrite(blueLED, HIGH);
  delay(5000);
  digitalWrite(blueLED, LOW);

  // Green LED
  digitalWrite(greenLED, HIGH);
  delay(5000);
  digitalWrite(greenLED, LOW);

  // Red LED
  digitalWrite(redLED, HIGH);
  delay(5000);
  digitalWrite(redLED, LOW);

  // Repeat
  delay(5);
}
