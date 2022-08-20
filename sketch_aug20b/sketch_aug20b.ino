void setup()
{
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(300);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(300);
  digitalWrite(5, LOW);
  Serial.print("done\n");
}
