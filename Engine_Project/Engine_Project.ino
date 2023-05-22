int power = 9;
int speed;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(power, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available() > 0)
{
  speed = Serial.parseInt();
  speed = constrain(speed, 0, 255);
  Serial.println(speed);
  analogWrite(power, speed);
  
}


}
