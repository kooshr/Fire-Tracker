
const int lightsensor = A0;
const int blueLED = 9;
const int active_buzzer = 12;
int hella;
boolean bet = false;
byte mac[] = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF };
byte ip[] = {123, 456, 7, 890};
void setup() {
  Serial.begin(9600);
  pinMode(blueLED, OUTPUT);
  pinMode(lightsensor, INPUT);
  pinMode(active_buzzer, OUTPUT);
}

void loop() {
  digitalWrite(blueLED, LOW);
  hella = analogRead(lightsensor);
  if (bet == false) {
  }
  if (hella > 700) {
    bet = true;
    Serial.println("Fire");
    Serial.println("37.787730,-122.411020");
    Serial.println(hella);
    digitalWrite(blueLED, HIGH);
    digitalWrite(active_buzzer, HIGH);
    delay(200);
    digitalWrite(blueLED, LOW);
    digitalWrite(active_buzzer, LOW);
    delay(200);
  }

  else {
    digitalWrite(blueLED, LOW);
    bet = false;
  }
}
