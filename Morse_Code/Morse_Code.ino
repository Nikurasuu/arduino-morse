
int led_on_time;
int low_counter;

void read_letter(int number){
  if(number == 1){
    Serial.print("h");
  }
  if(number == 2){
    Serial.print("a");
  }
  if(number == 3){
    Serial.print("l");
  }
  if(number == 4){
    Serial.print("o");
  }
  if(number == 5){
    Serial.println(" ");
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);

}

void loop() {
  //Serial.println(analogRead(A1));
  if(analogRead(A1) > 1010){
    while(analogRead(A1) > 1010){
      led_on_time++;
    }
    //Serial.println(led_on_time);
    if(led_on_time > 8000){
      //Serial.println(low_counter);
      //Serial.println("HIGH");
      read_letter(low_counter);
      low_counter = 0;
    } else if(led_on_time > 2900) {
      //Serial.println("LOW");
      low_counter++;
    }
    led_on_time = 0;
  }
}
