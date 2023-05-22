int sensorPin = A0;
int sensorValue = 0;
const int Read = 11;
const int Grean = 10;
const int Bleu = 9;


int redIntensity;
int greenIntensity;
int blueIntensity;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Read, OUTPUT);
pinMode(Grean, OUTPUT);
pinMode(Bleu, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
   

  for (int x = 0; x < 768; x++)
  {
    sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
    showRGB(x);
    delay(sensorValue/50);
  }


}

void showRGB(int color)
{
  if (color <= 255)
  {
    redIntensity = 255 - color;
    greenIntensity = color;
    blueIntensity = 0;
  }
  else if (color <= 511)
  {
    redIntensity = 0;
    greenIntensity = 255 - (color - 256);
    blueIntensity = (color - 256);
  }
  else
  {
    redIntensity = (color - 512);
    greenIntensity = 0;
    blueIntensity = 255 - (color - 512);
  }




  analogWrite(Read, redIntensity);
  analogWrite(Bleu, blueIntensity);
  analogWrite(Grean, greenIntensity);
}
