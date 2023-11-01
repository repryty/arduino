# 1 "c:\\Users\\LG\\Documents\\GitHub\\arduino\\sketch.ino"
char cmd;




void setup() {
  Serial.begin(9600);

  pinMode(2, 0x1);

  pinMode(9, 0x1);
  pinMode(8, 0x0);
}

void loop() {
    digitalWrite(9, 0x0);
    delayMicroseconds(2);
    digitalWrite(9, 0x1);
    delayMicroseconds(10);
    digitalWrite(9, 0x0);

    long distance1=pulseIn(8, 0x1);

    Serial.println(distance1 * 17 / 1000);

    delay(1000);

    if(Serial.available()){
        cmd = Serial.read();

        if(cmd=='a'){
            digitalWrite(2, 0x1);
        } else if(cmd=='b'){
            digitalWrite(2, 0x0);
        }
    }

}
