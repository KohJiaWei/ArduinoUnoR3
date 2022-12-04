int led = 13;
int array[5];
int i = 1;

void setup() {
  // put your setup code here, to run once:
  //PIN 13 has an LED connected
  for(i = 1; i<7;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(led, OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=1;i<7;i++){
  digitalWrite(i,HIGH);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(i,LOW);
  digitalWrite(led,LOW);
  }
  
  
}
