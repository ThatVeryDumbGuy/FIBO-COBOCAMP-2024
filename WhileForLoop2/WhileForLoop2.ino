//Set to "No line ending"

void setup() {
  Serial.begin(9600);

}

void loop() {

  Serial.print("Enter a number : "); //Input
  while(Serial.available()==0){}
  int num = Serial.parseInt();
  Serial.println(num);
  Serial.println();

  if(num < 1 || num > 99) { //Check whether if the number is in-range
    Serial.println("Number is out of range");
    Serial.println();

  } else {
    for (int i = 1; i < 13; i++) { //multiply loop
      Serial.print(num);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(num*i);
    }
    Serial.println();
  }
}
