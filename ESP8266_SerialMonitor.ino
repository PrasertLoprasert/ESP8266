int ledOutput = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledOutput, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    int inputRead = Serial.read();  // สร้างตัวแปรประเภทจำนวนเต็ม(int) ชื่อ inputRead ให้เก็บค่าที่อ่านได้จาก Serial Monitro

    if(inputRead == '1') {
      digitalWrite(ledOutput, LOW); // ถ้า key เลข 1 เข้ามาให้ไฟ LED เปิด
    }
    else if(inputRead == '0'){
      digitalWrite(ledOutput, HIGH); // ถ้า key เลข 0 เข้ามาให้ไฟ LED ดับ
    }
  }

  delay(10);

}
