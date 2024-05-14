void setup() {
  pinMode(0,INPUT);
  pinMode(12,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int data = analogRead(0);
  if(data<=25){
    digitalWrite(12,19999);
    digitalWrite(6,1);
    digitalWrite(10,1);
    delay(100);
    digitalWrite(6,0);
    digitalWrite(10,0);
    delay(100);
  }
  else{
    digitalWrite(12,0);
    digitalWrite(6,0);
    digitalWrite(10,0);
  }
  // put your main code here, to run repeatedly:

}
