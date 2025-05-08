int hall = D9;
int r1 = D0;
int b1 = D1;
int g1 = D2;
int r2 = D3;
int b2 = D4;
int g2 = D5;
int r3 = D6;
int b3 = D7;
int g3 = D8;
int threshold = 2000;

const int NUM_LEDS = 3;

int red[NUM_LEDS] = {r1, r2, r3};
int blue[NUM_LEDS] = {b1, b2, b3};
int green[NUM_LEDS] = {g1, g2, g3};

void setup() {
  // put your setup code here, to run once:
pinMode(hall, INPUT);

pinMode(r1, OUTPUT);
pinMode(b1, OUTPUT);
pinMode(g1, OUTPUT);

pinMode(r2, OUTPUT);
pinMode(b2, OUTPUT);
pinMode(g2, OUTPUT);

pinMode(r3, OUTPUT);
pinMode(b3, OUTPUT);
pinMode(g3, OUTPUT);

for (int i=0; i<NUM_LEDS; i++){
    digitalWrite(red[i], HIGH);
    digitalWrite(blue[i], HIGH);
    digitalWrite(green[i], HIGH);
  }
}

void turn_all(int r, int g, int b){
  for (int i=0; i<NUM_LEDS; i++){
    analogWrite(red[i], r);
    analogWrite(green[i], g);
    analogWrite(blue[i], b);
  }
}

void loop() {

  // put your main code here, to run repeatedly:
  int hall_val = digitalRead(hall);
  if (!hall_val){
    turn_all(255, 255, 255);
  }
  else{
    turn_all(0, 90, 255);
  }

  delay(10);

}
