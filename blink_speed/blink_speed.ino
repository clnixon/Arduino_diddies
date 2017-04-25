int potPen = A0;  //Declaring A0 for potentiometer reading
int LEDPin = 9;   //Declaring pin 9 for LED
int blinkRate;   //Declaring variable for how fast the LED should blink
int readRate;   //Declaring variable for reading potentiometer value.


void setup(){
  Serial.begin(9600);  //Open serial port
  pinMode(potPen, INPUT);  //set potentiometer input.
  pinMode(LEDPin, OUTPUT); //set led output.

}

void loop(){
  readRate = analogRead(potPen);
  Serial.println(readRate);
  delay(500);
  blinkRate = (255./1023.) * readRate;
  analogWrite(LEDPin, blinkRate);

}
