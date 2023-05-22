int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int redColor = 200;
int greenColor = 0;
int blueColor = 255;
String input = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
 
   
 
  
  
   analogWrite(redPin, redColor);
  analogWrite(greenPin, greenColor);
  analogWrite(bluePin, blueColor);
  
  
  

}
