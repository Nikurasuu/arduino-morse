#define pause 12
#define pulse 12
#define start 20

char rx_byte = 0;
String rx_str = "";

void blink_led(int counter) {
  for (int  i = 0; i < counter; i++) {
    digitalWrite(2, LOW);
    delay(pause);
    digitalWrite(2, HIGH);
    delay(pulse);
  }
}

void print_letter(String letter) {
  Serial.print("sending: "); Serial.println(letter);
  if (letter == "e") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(1);
  }
  if (letter == "n") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(2);
  }
  if (letter == "i") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(3);
  }
  if (letter == "s") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(4);
  }
  if (letter == "r") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(5);
  }
  if (letter == "a") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(6);
  }
  if (letter == "t") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(7);
  }
  if (letter == "d") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(8);
  }if (letter == "h") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(9);
  }
  if (letter == "u") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(10);
  }
  if (letter == "l") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(11);
  }
  if (letter == "c") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(12);
  }
  if (letter == "g") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(13);
  }
  if (letter == "m") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(14);
  }
  if (letter == "o") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(15);
  }
  if (letter == "b") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(16);
  }
  if (letter == "w") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(17);
  }
  if (letter == "f") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(18);
  }
  if (letter == "k") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(19);
  }
  if (letter == "z") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(20);
  }
  if (letter == "p") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(21);
  }if (letter == "v") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(22);
  }
  if (letter == "j") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(23);
  }
  if (letter == "y") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(24);
  }
  if (letter == "x") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(25);
  }
  if (letter == "q") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(26);
  }
  if (letter == " ") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(27);
  }
  if (letter == "skip") {
    digitalWrite(2, HIGH);
    delay(start);
    blink_led(28);
  }
  digitalWrite(2, LOW);
  delay(pause);
}

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    rx_byte = Serial.read();

    if (rx_byte != '\n') {
      rx_str += rx_byte;
    }
    else {
      print_letter("skip");
      for (auto x : rx_str)
      {
        String y = String(x);
        print_letter(y);
      }
      print_letter("skip");
      Serial.println(rx_str);
      rx_str = "";
    }
  }
}
