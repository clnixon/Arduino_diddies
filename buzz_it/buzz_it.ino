int buzzPin = 10;
//int freq = 100;

void setup() {
    pinMode(buzzPin, OUTPUT);
}

void loop() {
//    digitalWrite(buzzPin, HIGH);
//    delay(10);
//    digitalWrite(buzzPin, LOW);
//    delay(500);
    analogWrite(buzzPin, 50);
    delay(250);
    analogWrite(buzzPin, 100);
    delay(250);
    analogWrite(buzzPin, 150);
    delay(500);
    analogWrite(buzzPin, 255);
    delay(250);
    analogWrite(buzzPin, 100);
    delay(500);
    analogWrite(buzzPin, 145);
    delay(100);
}
