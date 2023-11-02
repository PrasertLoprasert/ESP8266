int ledPin = 2;
int timeOn = 500;
int timeOff = 600;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.print("LED On/Offf");
  Serial.println(timeOn + timeOff);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, LOW);
  Serial.println("LED On");
  delay(timeOn);

  digitalWrite(ledPin, HIGH);
  Serial.println("LED Off");
  delay(timeOff);

}
