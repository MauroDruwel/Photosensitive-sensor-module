/*
  Analog input, serial output
  Reads an analog input pin, prints the result to the Serial Monitor.
  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe
  modified 8 March 2021
  by Midas Gossye (Whadda/Velleman)
  Based on Arduino AnalogInOutSerial code
  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int digitalInPin = 2;  // Analog input pin that the light sensor is attached to
const int ledPin = 13;

bool sensorValue;        // value read from the light sensor

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = digitalRead(digitalInPin);

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  if(sensorValue){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  // wait 10 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(10);
}
