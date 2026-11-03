const int LED = 3;
const int BTN = 8;
int led_state = LOW;
int last_state = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int current_state = digitalRead(BTN);

  if (current_state == LOW && last_state == HIGH){
    led_state = !led_state;
    digitalWrite(LED,led_state); 
  }
  last_state = current_state;
}
