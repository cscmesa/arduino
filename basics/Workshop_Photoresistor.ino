

int sensorValue;
int borderline = 150;

void setup() {
  
  Serial.begin(9600); 
  
  pinMode(8, OUTPUT);

}

void loop() {

  sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  
  delay(100);
  
    if (sensorValue < borderline) {
      digitalWrite(8, HIGH);
    }
    else {
      digitalWrite(8, LOW);
    }
    
  }


