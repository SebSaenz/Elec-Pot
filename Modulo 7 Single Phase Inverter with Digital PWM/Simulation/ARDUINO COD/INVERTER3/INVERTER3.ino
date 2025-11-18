float t1=859;
float t2=1351.7;
float t3=2562;
float t4=2744.6;
float d1=t2-t1;
float d2=t3-t2;
float d3=t4-t3;
float d4=10000-(2*t4);

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delayMicroseconds(t1);
  digitalWrite(7, LOW);
  delayMicroseconds(d1);
  digitalWrite(7, HIGH);
  delayMicroseconds(d2);
  digitalWrite(7, LOW);
  delayMicroseconds(d3);
  digitalWrite(7, HIGH);
  delayMicroseconds(d4);
  digitalWrite(7, LOW);
  delayMicroseconds(d3);
  digitalWrite(7, HIGH);
  delayMicroseconds(d2);
  digitalWrite(7, LOW);
  delayMicroseconds(d1);
  digitalWrite(7, HIGH);
  delayMicroseconds(t1);
  digitalWrite(7, LOW);
  delayMicroseconds(t1);
  digitalWrite(7, HIGH);
  delayMicroseconds(d1);
  digitalWrite(7, LOW);
  delayMicroseconds(d2);
  digitalWrite(7, HIGH);
  delayMicroseconds(d3);
  digitalWrite(7, LOW);
  delayMicroseconds(d4);
  digitalWrite(7, HIGH);

}
