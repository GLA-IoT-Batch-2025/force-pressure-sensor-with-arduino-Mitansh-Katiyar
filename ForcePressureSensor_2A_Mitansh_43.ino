
int sensorPin = A0;    
int sensorValue = 0;   
int force = 0;         

void setup() {
  Serial.begin(9600);   // 
}

void loop() {
  sensorValue = analogRead(sensorPin);  

  // Simple mapping (optional)
  force = map(sensorValue, 0, 1023, 0, 100);  

  Serial.print("Raw Value: ");
  Serial.print(sensorValue);
  Serial.print("   Force %: ");
  Serial.println(force);

  delay(200);
}
