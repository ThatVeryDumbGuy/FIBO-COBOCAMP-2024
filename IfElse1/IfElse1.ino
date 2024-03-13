//Set to "No Line Ending"

void setup() {
  Serial.begin(9600);

}

void loop(){

  while(Serial.available()==0){}
  float num1 = Serial.parseFloat();

  // Check for zero
  if(int(num1) == 0) {
    Serial.println("Zero");

  } else if (num1 > 0) { //Check positive

    if(int(num1) % 2 == 0) {
      Serial.println("Postive even");
    } else { Serial.println("Positive odd"); }

  } else {  //Check negative

    if(int(num1) % 2 == 0) { 
      Serial.println("Negative even");
    } else { Serial.println("Negative odd"); }

  }

}
