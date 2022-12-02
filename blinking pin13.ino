int led = 13;

void setup() {
  // put your setup code here, to run once:
  //PIN 13 has an LED connected
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
