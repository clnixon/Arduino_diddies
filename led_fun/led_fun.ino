int redPin = 11;                //Set Red LED to pin 11
int greenPin = 6;               //Set green LED to pin 6
int bluePin = 10;               //Set blue LED to pin 10
int brightness = 255;           //Set initial brightness
String userColor;               //User input for color

void setup() {
    Serial.begin(9600);         //Initialize serial port
    pinMode(redPin, OUTPUT);    //set pin mode to out
    pinMode(greenPin, OUTPUT);  //set pin mode to out
    pinMode(bluePin, OUTPUT);   //set pin mode to out
}

void loop() {
  Serial.println("Please input color choice (red, green or blue):  ");  //Prompting user for input
  while (Serial.available()==0){   }              //wait for user input
  userColor = Serial.readString();                //read string from serial port

  if (userColor == "red"){
    analogWrite(redPin, brightness);             //Turn red on
    analogWrite(bluePin, 0);                     //Turn blue off
    analogWrite(greenPin, 0);                   //Turnn green off
  }

  if (userColor == "green"){
    analogWrite(greenPin, brightness);             //Turn green on
    analogWrite(bluePin, 0);                     //Turn blue off
    analogWrite(redPin, 0);                   //Turn red off
  }

  if (userColor == "blue"){
    analogWrite(bluePin, brightness);             //Turn blue on
    analogWrite(redPin, 0);                     //Turn red off
    analogWrite(greenPin, 0);                   //Turn green off
  }

if (userColor != "red" && userColor != "green" && userColor != "blue") { //Test for valid input
    Serial.println("You have not entered a valid color, select red, green or blue please!");
    Serial.println("   ");
  }
}
