int potPen = A0; //Declaring pin in A0 as variable
int ledPin = 9;  //Declaring pin 9 for LED.
int writeValue;  //Declaring write value
float readValue;   //Declaring read value.



void setup() {
  Serial.begin(9600);  //Initiate serial port
  pinMode(potPen, INPUT);  //Set potpen as input
  pinMode(ledPin, OUTPUT); //Set led as output.

}

void loop() {
  readValue = analogRead(potPen);  //Read voltage from potentiometer
  Serial.println(readValue);
  delay(1000);
  writeValue = (255./1023.) * readValue; //Calculating value to write to LED.
  analogWrite(ledPin, writeValue);  //Sending write value to LED.
  Serial.print("How many Volts?  ");
  Serial.println(writeValue / 51);

}
