//Set to "No line ending"

float F = 76;
float C = 25;

void setup() {
  Serial.begin(9600);

  Serial.println(F_to_C(F));
  Serial.println(Find_Mode(C));

  Serial.println();
}

void loop() {}

float F_to_C(float F) { //Temp conversion function
  float C = (F-32)*5/9;
 return C;
}

String Find_Mode(float C) { //AC
  String state = "error if none";
  if(C > 30){
    state = "Cool"; 
  } else if (C >= 25) {
    state = "Normal";
  } else { state = "Dry"; }

  return state;
}




