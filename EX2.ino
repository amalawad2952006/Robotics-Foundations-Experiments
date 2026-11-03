const int LED1 = 7;
const int LED2 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(300);

  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
  delay(300);
}
