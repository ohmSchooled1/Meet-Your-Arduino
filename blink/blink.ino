// Worksheet 1: Meet your Arduino
// Blinks the built-in LED marked "L" on the board. No extra parts needed.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // the built-in LED is an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED on
  delay(1000);                      // wait 1 second
  digitalWrite(LED_BUILTIN, LOW);   // LED off
  delay(1000);                      // wait 1 second
}

