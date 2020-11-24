
int pause = 350;
int pulse = 350;
int start = 1000;

int led_on_time;

void blink_led(int counter){
  for(int i = 0; i < counter; i++){
    digitalWrite(2, LOW);
    delay(pause);
    digitalWrite(2, HIGH);
    delay(pulse);
  }
}

void print_letter(int letter){
  if (letter == "h"){
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(1);
  }
  if (letter == "a"){
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(2);
  }
  if (letter == "l"){
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(3);
  }
  if (letter == "o"){
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(4);
  }
  if (letter == "skip"){
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(5);
  }
  digitalWrite(2, LOW);
  delay(pause);
}

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  print_letter("h");
  print_letter("a");
  print_letter("l");
  print_letter("l");
  print_letter("o");
  print_letter("skip");
}
