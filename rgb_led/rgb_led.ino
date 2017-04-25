int redPin = 11;     //set pin 11 as red
int bluePin = 10;   //set pin 10 as blue
int greenPin = 6;     //set pin 6 as green
// int brightness = 15;  //Set a brightness

void setup(){
  Serial.begin(9600);    //Start serial port
  pinMode(redPin, OUTPUT);   //Set red pin  out
  pinMode(greenPin, OUTPUT); //Set green pin out
  pinMode(bluePin, OUTPUT);  //Set blue pin out
}

void loop(){
  analogWrite(redPin, 0);
  analogWrite(bluePin, 100);
  analogWrite(greenPin, 255);
}
