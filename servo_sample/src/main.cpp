#include <Arduino.h>
#include <Servo.h>

Servo servo1;//サーボ1のインスタンス
//サーボ1の初期位置
const int s1_init = 90;
const int s2_init = 90;
Servo servo2;//サーボ2のインスタンス


void setup(){
  //サーボ1の信号線を３番ピンに接続
  //（PWMピン以外のピンにも接続可）
  servo1.attach(3);
  servo2.attach(5);

  //初期位置に移動
  servo1.write(s1_init);
  servo2.write(s2_init);

  Serial.begin(115200);
}

void loop(){

  //初期位置
  servo1.write(s1_init);
  //servo2.write(s2_init);
  delay(1000);

  //サーボ出力
  //+で反時計周り
  servo1.write(-5+s1_init);
  //servo2.write(-5+s2_init);
  Serial.print("10 degree\n");
  delay(1000);


}