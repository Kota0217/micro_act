#include <Arduino.h>
#include <Servo.h>

Servo servo1;//サーボ1のインスタンス
Servo servo2;//サーボ2のインスタンス
Servo servo3;//サーボ3のインスタンス
Servo servo4;//サーボ4のインスタンス
Servo servo5;//サーボ5のインスタンス
Servo servo6;//サーボ6のインスタンス



//サーボ1の初期位置
const int s1_init = 90;
const int s2_init = 90;
const int s3_init = 90;
const int s4_init = 90;
const int s5_init = 90;
const int s6_init = 90;

void setup(){

  Serial.begin(115200);

  //サーボ1の信号線を３番ピンに接続
  //（PWMピン以外のピンにも接続可）
  servo1.attach(4);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(12);
  servo5.attach(8);
  //servo6.attach(12);

  //初期位置に移動
  servo1.write(s1_init);
  servo2.write(s2_init);


  servo3.write(s3_init);
  //servo4.write(-20+s4_init);

  delay(1000);

  //サーボ出力
  //+で反時計周り
  servo1.write(-15+s1_init);
  servo3.write(-16+s3_init);
  Serial.print("10 degree\n");
  delay(1000);




}




void loop(){

/*
  //初期位置
  servo5.write(s5_init);
  //servo6.write(s6_init);
  //servo2.write(s2_init);
  delay(1000);

    //サーボ出力
  //+で反時計周り
  servo5.write(5+s5_init);
  //servo6.write(-10+s6_init);
  Serial.print("10 degree\n");
  delay(1000);

*/


}