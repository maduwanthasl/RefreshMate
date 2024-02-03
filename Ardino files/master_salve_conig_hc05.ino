#include <SoftwareSerial.h>

// Define SoftwareSerial instance for HC-05 communication
SoftwareSerial mySerial(12, 13); // RX, TX

void setup() {
  // Open serial communications for debugging
  Serial.begin(9600);
  while (!Serial) {
    // Wait for serial port to connect (needed for native USB port only)
  }

  // Set up the data rate for the SoftwareSerial port (HC-05)
  mySerial.begin(38400);
}

void loop() {
  // Forward data from HC-05 to Serial
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }

  // Forward data from Serial to HC-05
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
