//Set to "No line ending"

  float Prog = 100;
  float Mech = 100;
  float Elec = 100;

void setup() {
  Serial.begin(9600);

  Serial.println(your_grade(Prog, Mech, Elec));

  Serial.println();
}
void loop() {}

char your_grade(float Prog, float Mech, float Elec) { //Function over here
  float avrg_score = (Prog + Mech + Elec)/3;
  char grade;
  if (avrg_score >= 80) {
    grade = 'A';
  } else if (avrg_score >= 70) {
    grade = 'B';
  } else if (avrg_score >= 60) {
    grade = 'C';
  } else if (avrg_score >= 50) {
    grade = 'D';
  } else { grade = 'F'; }

  return grade;
}