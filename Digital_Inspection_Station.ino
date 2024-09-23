void setup() {
  Serial.begin(9600);//Start serial monitor
  pinMode(3,OUTPUT);//Set LED pin as Output

}

void loop() {
int Sensor=analogRead(A0);//Read the Infrared Sensor
Serial.println(Sensor);//write the value of the sensor in the serial monitor
delay(500);//half second delay

if (Sensor<500){
  digitalWrite(3,HIGH);//Sensor Detects a Train
}

if(Sensor>500){
  digitalWrite(3,LOW);//No Train detected
}

}
