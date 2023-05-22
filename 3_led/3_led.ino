void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
int x;

}

void loop() {
  // put your main code here, to run repeatedly:
  
for (int i = 0; i <= 4; i++) {
digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
delay(500);
}
for (int i = 0; i <= 4; i++) {
digitalWrite(5, HIGH);
delay(500);
digitalWrite(5, LOW);
delay(500);
}
for (int i = 0; i <= 4; i++) {
digitalWrite(6, HIGH);
delay(500);
digitalWrite(6, LOW);
delay(500);
}}
