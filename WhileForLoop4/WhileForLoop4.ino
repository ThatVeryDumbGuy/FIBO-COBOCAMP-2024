//Set to "No line ending"

String state = "error if none";

void setup() {
  Serial.begin(9600);

}

void loop() {
  int i = 1;
  int weight[i] = {0};
  int totalWeight = 0;

  while(weight[i] >= 0) { //Loop until negative
    Serial.print("Enter weight ");
    Serial.print(i);
    Serial.print(" : ");

    while(Serial.available()==0){} //input
    weight[i] = Serial.parseInt();
    
    Serial.println(weight[i]);

    if( weight[i] >= 0) { //Addinf postive only
      totalWeight = totalWeight + weight[i]; 
    } 
    i++;
  }

  //Serial.println(totalWeight);

  if(i > 8) { //Check if more than 6 peeps including the negative number
    state = "No more than 6 people";
  } else {

    if (totalWeight > 350) { //Weight check
      state = "Overweight";
    } else { state = "Go go go"; }

  }
  Serial.println(state);
  Serial.println();
}
