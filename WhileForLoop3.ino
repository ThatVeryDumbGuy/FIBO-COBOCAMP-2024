////Set to "No line ending"

int num;
String state = "error if none";

void setup() {
  Serial.begin(9600);

}

void loop() {
  int randomNum = random(1, 100); //Not a true random but meh
  //Serial.println(randomNum);

  while(num != randomNum) { //Loop until the correct number is found

    Serial.print("Guess the number : ");
    while(Serial.available()==0){}
    num = Serial.parseInt();
    Serial.println(num);
    
    if(num < randomNum) { //check state
      state = "More that this";

    } else if(num > randomNum) {
      state = "Less that this";
    } else { state = "Correct"; }

    Serial.println(state);
    Serial.println();

  }

}
