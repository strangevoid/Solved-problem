#include<Servo.h>

Servo s,s1,s2,s3;
void t1();
void t2();
void t3();
void t4();
void t4();
void t5();
void t6();
void t7();
void t8();
void t9();
void t10();
void t11();
void t12();
void t13();
void t14();
void t15();
int dis,du,dis1,dis2,dis3,du1,du2,du3,sun,eq;

void setup() {
  
  pinMode(12,INPUT);//1st sonar & echo pin
  pinMode(11,OUTPUT);//1st & trig pin

  pinMode(8,OUTPUT);//3rd sonar & trig pin
  pinMode(7,INPUT);//3rd & echo pin


  s.attach(4);//1st Servo

  s1.attach(16);//2nd Servo

  s2.attach(17);//3rd Servo

  s3.attach(15);//4th Servo

  pinMode(14,OUTPUT);//Buzzer

  pinMode(18,OUTPUT);

  Serial.begin(9600);
    // put your setup code here, to run once:

}

void loop() {

  eq=analogRead(8);//vibration Sensor
  Serial.print("Vibrtion : ");
  Serial.println(eq);

  sun=analogRead(7);//ldr sensor
  Serial.print("light : ");
  Serial.println(sun);

  dis3=analogRead(6);
  Serial.print("Ir 1 : ");
  Serial.println(dis3);

  dis1=analogRead(5);
  Serial.print("Ir 2 :  ");
  Serial.println(dis1); 


  digitalWrite(8,0);//Sonar 3
  delay(2);
  digitalWrite(8,1);
  delay(10);
  digitalWrite(8,0);
  du2=pulseIn(7,1);
  dis2=du2/2*0.034;
  Serial.print("Sonar 3 : ");
  Serial.println(dis2);


  digitalWrite(11,0);//Sonar 1
  delay(2);
  digitalWrite(11,1);
  delay(10);
  digitalWrite(11,0);
  du=pulseIn(12,1);
  dis=du/2*0.034;
  Serial.print("Sonar 1 : ");
  Serial.println(dis);

  if(eq>100){
  earthif();
}
  else{
  earthelse();
}
if(sun<=100){
  digitalWrite(18,1);
}
else{
  digitalWrite(18,0);
}


  if(dis<10 && dis1<100 && dis2<10 && dis3<100){
    t1();
  }
  else if(dis<10 && dis1<100 && dis2<10){
    t2();
  }
  else if(dis<10 && dis1<100 && dis3<100){
    t3();
  }
  else if(dis<10 && dis2<10 && dis3<100){
    t4();
  }
  else if(dis1<100 && dis2<10 && dis3<100){
    t5();
  }
  else if(dis <10 && dis1<100){
    t6();
  }
  else if(dis<10 && dis2<10){
    t7();
  }
  else if(dis<10 && dis3<100){
    t8();

  }
  else if(dis1<100 && dis2<10){
    t9();
  }
  else if(dis1<100 && dis3<100){
    t10();
  }
  else if(dis2<10 && dis3<100){
    t11();
  }
  else if(dis<10){
    t12();
  }
  else if(dis1<100){
    t13();
  }
  else if(dis2<10){
    t14();
  }
  else if(dis3<100){
    t15();
  }

  
  // put your main code here, to run repeatedly:

}
void earthif(){
    digitalWrite(14,1);
  delay(1000);
  s.write(70);
  s1.write(60);
  s2.write(20);
  s3.write(120);
}
void earthelse(){
    digitalWrite(14,0);
    s.write(170);
  s1.write(160);
  s2.write(120);
  s3.write(20);

}
void t1(){
   s.write(70);
   delay(1000);
   s.write(170);
  s1.write(60);
  delay(1000);
  s1.write(160);
  s2.write(20);
  delay(1000);
  s2.write(120);
  s3.write(120);
  delay(1000);
  s3.write(20);

}
void t2(){
   s.write(70);
   delay(1000);
   s.write(170);
  s1.write(60);
  delay(1000);
  s1.write(160);
  s2.write(20);
  delay(1000);
  s2.write(120);

}
void t3(){
  s.write(70);
   delay(1000);
   s.write(170);
  s1.write(60);
  delay(1000);
  s1.write(160);
  s3.write(120);
  delay(1000);
  s3.write(20);
}

void t4(){
  s.write(70);
   delay(1000);
   s.write(170);
  s2.write(20);
  delay(1000);
  s2.write(120);
  s3.write(120);
  delay(1000);
  s3.write(20);

}
void t5(){
  s1.write(60);
  delay(1000);
  s1.write(160);
  s2.write(20);
  delay(1000);
  s2.write(120);
  s3.write(120);
  delay(1000);
  s3.write(20);
}
void t6(){
   s.write(70);
   delay(1000);
   s.write(170);
  s1.write(60);
  delay(1000);
  s1.write(160);
}
void t7(){
    s.write(70);
   delay(1000);
   s.write(170);
  s2.write(20);
  delay(1000);
  s2.write(120);
}
void t8(){
  s.write(70);
  delay(1000);
  s.write(170);
  s3.write(120);
  delay(1000);
  s3.write(20);

}
void t9(){
  s1.write(60);
  delay(1000);
  s1.write(160);
  s2.write(20);
  delay(1000);
  s2.write(120);
}
void t10(){
  s1.write(60);
  delay(1000);
  s1.write(160);
  s3.write(120);
  delay(1000);
  s3.write(20);

}
void t11(){
  s2.write(20);
  delay(1000);
  s2.write(120);
  s3.write(120);
  delay(1000);
  s3.write(20);


}
void t12(){
   s.write(70);
   delay(1000);
   s.write(170);

}
void t13(){
  s1.write(60);
  delay(1000);
  s1.write(160);

}
void t14(){
  s2.write(20);
  delay(1000);
  s2.write(120);

}
void t15(){
  s3.write(120);
  delay(1000);
  s3.write(20);
}