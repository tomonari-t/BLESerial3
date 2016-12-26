const int PIN_LED = 6;

void blinkLED() {
   digitalWrite(PIN_LED, HIGH);
   delay(100);
   digitalWrite(PIN_LED, LOW);
}

void doubleBlinkLED() {
   digitalWrite(PIN_LED, HIGH);
   delay(100);
   digitalWrite(PIN_LED, LOW);
   delay(100);
   digitalWrite(PIN_LED, HIGH);
   delay(100);
   digitalWrite(PIN_LED, LOW);
}

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial1.begin(9600);
}

void loop() {
  // データが送られてきたら
  if (Serial1.available() > 0) {
    int data = Serial1.read();

    if (data == 1) {
        blinkLED();
    }

    if (data == 2) {
        doubleBlinkLED();
    }
  }
}

