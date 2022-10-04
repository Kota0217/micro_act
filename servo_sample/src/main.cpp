#include <Arduino.h>
#include <Servo.h>

Servo servo;//サーボのインスタンス

void setup(){
  //サーボの信号線を３番ピンに接続
  //（PWMピン以外のピンにも接続可）
  servo.attach(3);

  //初期位置に移動
  servo.write(20);

  Serial.begin(115200);
}

void loop(){

  //サーボ出力
  servo.write(20);
  Serial.print("20 degree\n");
  delay(1000);
  
  servo.write(10);//0~180まで
  Serial.print("10 degree\n");
  delay(2000);

  servo.write(0);//0~180まで
  delay(1000);

}