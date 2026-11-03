const int BTN = 8;
int count = 0;
int last_state = HIGH;
void setup() {
  // put your setup code here, to run once:
  pinMode(BTN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int current_state = digitalRead(BTN);

  if (last_state == HIGH && current_state == LOW){
    count ++;
    Serial.println(count);
  }
  last_state = current_state;
}
