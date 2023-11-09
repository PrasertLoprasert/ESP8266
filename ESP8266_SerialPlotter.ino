int ledOutput = 2;
int timeOn = 1000;
int timeOff = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledOutput, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledOutput, LOW);  // เปิดไฟ LED
  Serial.println(1);
  delay(timeOn);

  digitalWrite(ledOutput, HIGH);  // ปิดไฟ LED
  Serial.println(0);
  delay(timeOff);
}
