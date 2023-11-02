void setup() {
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(2, LOW);  // ให้เปิดไฟ LOW = เปิด เนื่องจากเป็น Active LOW
  delay(1000); // ให้เปิดไฟค้างไว้ 1 วินาที

  digitalWrite(2, HIGH);  // ให้ปิดไฟ
  delay(2000);

}
