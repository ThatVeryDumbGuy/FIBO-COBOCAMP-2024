//Set to "No line ending"

int hour;
int min;
int THB;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //hour
  Serial.print("Please insert hour(s) : ");
  while(Serial.available()==0){}
  int hour = Serial.parseInt();
  Serial.println(hour);

  //min
  Serial.print("Please insert minute(s) : ");
  while(Serial.available()==0){}
  int min = Serial.parseInt();
  Serial.println(min);

  //Check negative
  if(hour < 0 || min < 0) {
    Serial.println("Please enter a positive integer");

  } else {
    if(hour < 2) { //First 1 hour free
      THB = 0;

    } else {

      if(min > 0) { //Extra min
        hour++;
      }
      THB = hour * 30;
    }
  }

  Serial.print(THB);
  Serial.println(" Baht");
  Serial.println();
}


