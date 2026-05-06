const int LED = 18;
const int LED_BUTTON = 17;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED_BUTTON, INPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  if (digitalRead(LED_BUTTON) == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}

