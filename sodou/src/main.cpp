#include <Arduino.h>
#include <Servo.h>

Servo servo5;//サーボ5のインスタンス
Servo servo6;//サーボ6のインスタンス



//サーボ1の初期位置
const int s5_init = 90;
const int s6_init = 90;


void setup(){

  Serial.begin(115200);

  //サーボ1の信号線を３番ピンに接続
  //（PWMピン以外のピンにも接続可）

  servo5.attach(8);
  servo6.attach(12);

  //******************初期位置へ移動*************************
  //サーボ出力
  //+で反時計周り
  //servo5.write(-5+s5_init);
  delay(1000);

  servo5.write(s5_init);
  delay(1000);

  servo5.write(-5+s5_init);
  delay(1000);

  servo5.write(-10+s5_init);
  delay(1000);
  
  servo5.write(-15+s5_init);
  delay(1000);

  servo5.write(-20+s5_init);
  delay(1000);



}




//loop関数は使わない
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

/*
  digitalWrite(2, HIGH);
  digitalWrite(12, LOW);

  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
*/


}