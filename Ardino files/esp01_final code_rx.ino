char incomingValue = 0;

#define in1 0 // Pin 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(in1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    incomingValue = Serial.read();

    if (incomingValue == 'A') {
      digitalWrite(in1, HIGH);
      Serial.println(incomingValue);
      // delay(1000);
    } else if (incomingValue == 'B') {
      digitalWrite(in1, LOW);
      Serial.println(incomingValue);
      // delay(1000);
    }
  }

  Serial.println(1);
  delay(1000);
}
