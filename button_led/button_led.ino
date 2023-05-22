int LED = 6;
int button = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button) = HIGH){
  digitalWrite(LED, HIGH);
}
else
{
  digitalWrite(LED, LOW);
}
  

}
