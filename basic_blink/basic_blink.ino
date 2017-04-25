int redLED = 9;  // Initialize Pin 9 as red LED
int blueLED = 10; //Initialize Pin 10 as blue LED
int redON = 150;  // Red LED on time
int redOFF = 250; // Red LED off time
int blueON = 450; // Blue LED on time
int blueOFF = 150; // Blue LED off time
int redBlinkRate = 5;
int blueBlinkRate = 3;

void setup() {

  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {

    for (int j=1; j <=redBlinkRate; j=j+1){
        digitalWrite(redLED, HIGH);
        delay(redON);
        digitalWrite(redLED, LOW);
        delay(redOFF);
    }

    for (int k=1; k <= blueBlinkRate; k=k+1){
        digitalWrite(blueLED, HIGH);
        delay(blueON);
        digitalWrite(blueLED, LOW);
        delay(blueOFF);
    }

}
