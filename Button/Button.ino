
int butt = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(butt, INPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(butt) == LOW){
Serial.println("Yee");
}
if (digitalRead(butt) == HIGH){
Serial.println("Ree");
}
  


}
