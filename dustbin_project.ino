 #include<Servo.h>
Servo servo;
int a;
int e=9;
int t=10;
int d;
void setup() {
  servo.attach(4);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  Serial.begin(9600); 
    Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
 int a1 = analogRead(8);
 Serial.print("First fire : ");
  Serial.println(a1);
  int b1= analogRead(9);
  Serial.print("second fire =");
  Serial.println(b1);
  if(a1<=125||b1<125){
    tone(6,2500);
    delay(200);
    tone(6,2600);
    delay(200);
    digitalWrite(11,1);
    delay(200);
    digitalWrite(11,0);
    digitalWrite(13,1);
    delay(200);
    digitalWrite(13,0);
    goto out;
  }
  else{
    noTone(6);
  }
    int d=analogRead(2);
  Serial.println("Gas = ");
  Serial.print(d);
  if(d>500){
        tone(6,2500);
    delay(200);
    tone(6,2600);
    delay(200);
    digitalWrite(11,1);
    delay(200);
    digitalWrite(11,0);
    digitalWrite(13,1);
    delay(200);
    digitalWrite(13,0);

  }
    else{
    noTone(6);
    }
  digitalWrite(10,0);
  delay(2);
  digitalWrite(10,1);
  delay(10);
  digitalWrite(10,0);
  t=pulseIn(9,1);
  d=t*0.034/2;
  Serial.print("sona:");
  Serial.println(d);
  if(d<=20){
    servo.write(0);
    digitalWrite(2,1);
    delay(3000);
  }
  else{
    servo.write(140);
    digitalWrite(2,0);
  }
  
  Serial.print("analog reading=\n");
  int data = analogRead(0);
  Serial.println(data);
  delay(88);
  if(data<=65){
    digitalWrite(23,1);
    digitalWrite(22,0);
  }
  else{
    digitalWrite(23,0);
    digitalWrite(22,1);
  }
  out:
  return 0;
  
}