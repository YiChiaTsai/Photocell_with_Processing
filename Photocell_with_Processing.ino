int photocellPin = A2;
int photocellVal = 0;
int threshold = 700;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  photocellVal = analogRead(photocellPin);
//  photocellVal = map(photocellVal, 100, 1000, 0, 1024);
//  photocellVal = constrain(photocellVal, 0, 1024);
  
  Serial.println(photocellVal);
  
  delay(2);
}
