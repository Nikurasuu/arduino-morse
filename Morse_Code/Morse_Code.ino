int led_on_time;
int low_counter;

void read_letter(int number){
  if(number == 1){
    Serial.print("e");
  }
  if(number == 2){
    Serial.print("n");
  }
  if(number == 3){
    Serial.print("i");
  }
  if(number == 4){
    Serial.print("s");
  }
  if(number == 5){
    Serial.print("r");
  }
  if(number == 6){
    Serial.print("a");
  }
  if(number == 7){
    Serial.print("t");
  }
  if(number == 8){
    Serial.print("d");
  }
  if(number == 9){
    Serial.print("h");
  }
  if(number == 10){
    Serial.print("u");
  }
  if(number == 11){
    Serial.print("l");
  }
  if(number == 12){
    Serial.print("c");
  }
  if(number == 13){
    Serial.print("g");
  }
  if(number == 14){
    Serial.print("m");
  }
  if(number == 15){
    Serial.print("o");
  }
  if(number == 16){
    Serial.print("b");
  }
  if(number == 17){
    Serial.print("w");
  }
  if(number == 18){
    Serial.print("f");
  }
  if(number == 19){
    Serial.print("k");
  }
  if(number == 20){
    Serial.print("z");
  }
  if(number == 21){
    Serial.print("p");
  }
  if(number == 22){
    Serial.print("v");
  }
  if(number == 23){
    Serial.print("j");
  }
  if(number == 24){
    Serial.print("y");
  }
  if(number == 25){
    Serial.print("x");
  }
  if(number == 26){
    Serial.print("q");
  }
  if(number == 27){
    Serial.print(" ");
  }
  if(number == 28){
    Serial.println(" ");
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Serial begin");
  pinMode(A1, INPUT);
}

void loop() {
  if(analogRead(A1) > 1005){
    while(analogRead(A1) > 1005){
      led_on_time++;
      //Serial.println(led_on_time);
    }
    //Serial.println(led_on_time);
    if(led_on_time > 240){
      read_letter(low_counter);
      low_counter = 0;
    } else if(led_on_time > 74) {
      low_counter++;
    }
    led_on_time = 0;
  }
}
