const int ledPins[] = {2, 3, 4, 5, 6}; // Pins where the LEDs are connected
const int numLeds = 5; // Number of LEDs
const int delayTime = 200; // Delay time in milliseconds

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Create a wave effect
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn the current LED on
    delay(delayTime); // Wait for a while
    digitalWrite(ledPins[i], LOW); // Turn the current LED off
  }

  // Optional: Create a reverse wave effect
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn the current LED on
    delay(delayTime); // Wait for a while
    digitalWrite(ledPins[i], LOW); // Turn the current LED off
  }
}