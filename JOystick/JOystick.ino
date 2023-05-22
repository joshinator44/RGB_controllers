int x = 0;
int y = 1;
int pres = 3;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pres, INPUT);
  digitalWrite(pres, HIGH);


}

void loop() {
  // put your main code here, to run repeatedly/
  
  Serial.println(analogRead(x));
 
  Serial.println(analogRead(y));
  
  Serial.println(digitalRead(pres));
  delay(500);
  
 


}
