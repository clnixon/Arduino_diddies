int potPen = A0;  //Assigning potention to A0 input.
int readValue;  //Declaring variable for readValue
float Voltage; //Declaring voltage variable

void setup(){
  pinMode(potPen, INPUT);
  Serial.begin(9600);

}

void loop(){
  readValue = analogRead(potPen);  //Read potPen value from arduino
//  Serial.println(readValue);
  Voltage = (5./1023.) * readValue;  //Calculating real world voltage
  Serial.println(Voltage);          //Printing out voltage
  delay(500);
}
