#include <Servo.h>

Servo OnSagOmuz;
Servo OnSagKol;
Servo OnSagParmak;


Servo OnSolOmuz;
Servo OnSolKol;
Servo OnSolParmak;


Servo ArkSagOmuz;
Servo ArkSagKol;
Servo ArkSagParmak;


Servo ArkSolOmuz;
Servo ArkSolKol;
Servo ArkSolParmak;



void setup() {
  OnSagOmuz.attach(2);
  OnSagKol.attach(3);
  OnSagParmak.attach(4);


  OnSolOmuz.attach(5);
  OnSolKol.attach(6);
  OnSolParmak.attach(7);


  ArkSagOmuz.attach(8);
  ArkSagKol.attach(9);
  ArkSagParmak.attach(10);


  ArkSolOmuz.attach(11);
  ArkSolKol.attach(12);
  ArkSolParmak.attach(13);
  
  

}
String emir = "";

void loop() {

  //Spider_Uyku();
  //delay(40000);
  Spider_Kalk();
  delay(40000);
  

}





void Spider_Kalk()  {
  OnSolOmuz.write(60);
  delay(3000);
  OnSagOmuz.write(155);
  delay(6000);
  ArkSagOmuz.write(60);
  delay(9000);
  ArkSolOmuz.write(145);
  delay(12000);

  OnSolKol.write(35);
  delay(15000);
  OnSagKol.write(145);
  delay(18000);
  ArkSagKol.write(135);
  delay(21000);
  ArkSolKol.write(40);
  delay(24000);

  OnSolParmak.write(110);
  delay(27000);
  OnSagParmak.write(60);
  delay(30000);
  ArkSagParmak.write(100);
  delay(33000);
  ArkSolParmak.write(85);
  delay(36000);
}
void Spider_Uyku()  {
  OnSolOmuz.write(35);
  delay(3000);
  OnSagOmuz.write(180);//180
  delay(3000);
  ArkSagOmuz.write(35);
  delay(3000);
  ArkSolOmuz.write(170);

  delay(3000);
  OnSolKol.write(175);
  delay(3000);
  OnSagKol.write(5);
  delay(3000);
  ArkSagKol.write(0);
  delay(3000);
  ArkSolKol.write(175);

  delay(3000);
  OnSolParmak.write(170);
  delay(3000);
  OnSagParmak.write(0);
  delay(3000);
  ArkSagParmak.write(170);
  delay(3000);
  ArkSolParmak.write(5);
  delay(3000);

}
