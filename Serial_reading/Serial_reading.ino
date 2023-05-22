int num;
String msg = "Please enter your number: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:
  
 Serial.println(msg);
 while (Serial.available() == 0); {}
 int myNumber = Serial.parseInt();
 Serial.println(myNumber);
  

}
