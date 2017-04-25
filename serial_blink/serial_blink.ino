int redLED = 9;  // Initialize Pin 9 as red LED
int blueLED = 10; //Initialize Pin 10 as blue LED
int redON = 250;  // Red LED on time
int redOFF = 250; // Red LED off time
int blueON = 250; // Blue LED on time
int blueOFF = 250; // Blue LED off time
int redBlinkRate = 5 ; // Number of time the Red LED will blink
int blueBlinkRate = 5 ; // Number of times the Blue LED will blink
int writeValueRed;
int writeValueBlue;
String redMessage="The Red LED is blinking at ";
String blueMessage="The Blue LED is blinking at ";


void setup() {
    Serial.begin(9600);
    String wm1= "Welcome to";
    String wm2= " My Program!";
    String wm3;
    wm3 = wm1 + wm2;
//    Serial.println(wm1 + wm2);
    Serial.println(wm3);
    pinMode(redLED, OUTPUT);
    pinMode(blueLED, OUTPUT);

    Serial.println("What Voltage do you want for the Red LED(0-255)?");
    while (Serial.available()==0){ }
    writeValueRed = Serial.parseInt();

    Serial.println("What Voltage do you want for the Blue LED(0-255)?");
    while (Serial.available()==0){ }
    writeValueBlue = Serial.parseInt();
//    Serial.println("How many times do you want the red LED to blink? ");  //Ask user for a number for red led to blink.
//    while (Serial.available()==0){  }  //Wait for input
//    redBlinkRate = Serial.parseInt(); //Read input

//    Serial.println("How many times do you want the blue LED to blink? ");  //Ask user for a number for blue led to blink.
//    while (Serial.available()==0){  } //Wait for input
//    blueBlinkRate = Serial.parseInt(); //Read input
}

void loop() {

  Serial.print(redMessage + writeValueRed / 51);
  Serial.println(" volts!");                         //Start of Red loop
    int j=1;
    while (j<=redBlinkRate){
        Serial.print("  You are on blink #:  ");
        Serial.println(j);
        analogWrite(redLED, writeValueRed);
        delay(redON);
        analogWrite(redLED, 0);
        delay(redOFF);
        j = j + 1;
    }

Serial.println("  ");

Serial.print(blueMessage + writeValueBlue / 51);
Serial.println(" volts!");
    int k = 1;
    while (k <=blueBlinkRate){
        Serial.print("  You are on blink #:  ");
        Serial.println(k);
        analogWrite(blueLED, writeValueBlue);
        delay(blueON);
        analogWrite(blueLED, 0);
        delay(blueOFF);
        k = k + 1;
    }
Serial.println("  ");
Serial.println("End of Loop, Restarting now!");
Serial.println("");

}
