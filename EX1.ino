const int LED = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void blink(int onMs) {
  digitalWrite(LED, HIGH);
  delay(onMs);

  digitalWrite(LED, LOW);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("S");
  for(int i = 0; i < 3, i++;) {
    blink(150);
  }

  Serial.println("O");
  for(int i = 0; i < 3; i++)
   {blink(400);
  }

  Serial.println("S");
  for(int i = 0; i < 3; i++)
   {blink(150);
  }

  delay(2000);
}
