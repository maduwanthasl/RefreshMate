void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

float airQValue;

void loop() {
  // put your main code here, to run repeatedly:
  airQValue = analogRead(A0);
  Serial.println(airQValue);
  
  delay(10000);
}
