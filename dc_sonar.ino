#define d digitalWrite
#define p pinMode
#define o OUTPUT 
#define i INPUT
int ena=9 ;
int in1=8;
int in2=7;
int enb=3;
int in3=5;
int in4=4;
int pot=0;
int trig=10;
int echoh=11;
int dis;
int du;
void setup() {
  p(10,o);
  p(11,0);
  p(9,o);
  p( 8,o);
  p(7,o);
  p(0,o);
  d(8,1);
  d(7,0);
}
void loop()
{
  d(10,0);
  delay(2);
  d(10,1);
  delay(10);
  d(10,0);
  du=pulseIn(11,1);
  dis=du*0.034/2;
  dir();
}
void dir()
{
  analogWrite(ena,255);
  analogWrite(enb,255);
  
  if(dis<=10){
    d(in1,0);
    d(in2,1);
  }
  if(dis>10&&dis<20){
    d(in1,1);
    d(in2,0);
  }
}
