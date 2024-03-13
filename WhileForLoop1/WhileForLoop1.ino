//Set to "No line ending"

int num[8];
int odd = 0;
int even = 0;
String state = "error if none";

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 8; i++) { //input the eight numbers, can do both seperately and all at the same times
    while(Serial.available()==0){}
    num[i] = Serial.parseInt();

    Serial.print(num[i]);
    Serial.print(" ");

    if(num[i] % 2 == 0) { //Check for even numbers
      even = even + num[i];
    } else { odd = odd + num[i]; }

  }

  Serial.println();
  Serial.println();

  if(odd > even) { //comparison
    state = "Odd";

  } else if(even > odd) {
    state = "Even";
  } else { state = "Equal"; }

  Serial.println(state);
  Serial.println(odd);
  Serial.println(even);
  Serial.println();

  odd = 0;
  even = 0;
  state = "error if none";
}
