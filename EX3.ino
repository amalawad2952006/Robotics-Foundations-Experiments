const int LED = 8;
const int BTN = 2;
int blink;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BTN) == LOW) {
    blink = 100;
  }
  else {
    blink = 500;
  }
  digitalWrite(LED,HIGH);
  delay(blink);

  digitalWrite(LED,LOW);
  delay(blink);

}
