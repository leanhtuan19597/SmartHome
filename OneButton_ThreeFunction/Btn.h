#define LedPin1 5
#define LedPin2 6
#define LedPin3 7
#define LedPin4 8

void click() {
  Serial.println("Click.");
  static bool ledPin1_status = HIGH;
  digitalWrite(LedPin1, ledPin1_status);
  ledPin1_status = !ledPin1_status;
} // click1

void doubleclick() {
  Serial.println("Doubleclick.");
  static bool ledPin2_status = HIGH;
  digitalWrite(LedPin2, ledPin2_status);
  ledPin2_status = !ledPin2_status;
} // doubleclick1


void longPressStart() {
  Serial.println("LongPress start");
  digitalWrite(LedPin3,HIGH);

} 

void longPress() {
  Serial.println("LongPress...");
  digitalWrite(LedPin3,HIGH);

} // longPress1

void longPressStop() {
  Serial.println("LongPress stop");
  digitalWrite(LedPin3,LOW);

} // longPressStop1
