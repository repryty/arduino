char cmd;

#define ECHO 8
#define TRIG 9

void setup() {
  Serial.begin(9600);

  pinMode(2, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
    
    long distance1=pulseIn(ECHO, HIGH);

    Serial.println(distance1 * 17 / 1000);

    delay(1000);

    if(Serial.available()){
        cmd = Serial.read(); 

        if(cmd=='a'){
            digitalWrite(2, HIGH);
        } else if(cmd=='b'){
            digitalWrite(2, LOW);
        }
    }
    
}