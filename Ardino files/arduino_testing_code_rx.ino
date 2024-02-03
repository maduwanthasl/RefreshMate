char incomingValue = 0;

#define in1 13 // 1
#define in2 12 // 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    incomingValue = Serial.read();

    if (incomingValue == 'A') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      Serial.println(incomingValue);
      // delay(1000);
    } else if (incomingValue == 'B') {
      digitalWrite(in2, LOW);
      digitalWrite(in1, HIGH);
      Serial.println(incomingValue);
      // delay(1000);
    } else {
      digitalWrite(in2, HIGH);
      digitalWrite(in1, HIGH);
      Serial.println(incomingValue);
      // delay(1000);
    }
  }

  Serial.println(2);
  delay(1000);
}
