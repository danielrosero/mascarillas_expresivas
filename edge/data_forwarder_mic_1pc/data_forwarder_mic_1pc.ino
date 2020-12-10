
int  analogValue = 0;
int  sensorAnalogPin = A0;    // Select the Arduino input pin to accept the Sound Sensor's analog output

void setup() {
  Serial.begin(115200);
  Serial.println("Started");
}

void loop() {

  analogValue = analogRead(sensorAnalogPin);
  Serial.println(analogValue);
}
