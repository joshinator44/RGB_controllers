
//By Anonymous Shrimp
//https://youtube.com/channel/UCs2Sz1gPlWAdET5qcLcZCJw
//https://github.com/Anonymous-Shrimp


const int Read = 9;
const int Grean = 10;
const int Bleu = 11;

int displayTime = 10;
int redIntensity;
int greenIntensity;
int blueIntensity;


void setup()
{
  pinMode(Read, OUTPUT);
  pinMode(Grean, OUTPUT);
  pinMode(Bleu, OUTPUT);
}


void loop()
{
  int x;

  for (x = 0; x < 768; x++)
  {
    showRGB(x);
    delay(displayTime);
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
