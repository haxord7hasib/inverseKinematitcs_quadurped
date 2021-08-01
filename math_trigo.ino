
  

void math_trigo() {
  int pos=0;
  int a =120;
  int b =140;
  int c =100;
  float Atheta,Btheta,Ctheta,z,D;
  float NewA, Acalk,Bcalk,Ccalk,All_angles;
  Acalk = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (float(b * c)*2);
  Bcalk= (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (float(a * c)*2);
  Ccalk = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (float(a * b)*2);
  
  Atheta = acos(Acalk)*180/PI;
  Btheta = acos(Bcalk)*180/PI;
  Ctheta = acos(Ccalk)*180/PI;
  All_angles = (Atheta+Btheta+Ctheta);
  
  Serial.println(Atheta);
  delay(1000);
  Serial.println(Btheta);
  delay(1000);
  Serial.println(Ctheta);
  //delay(1000);




   servo1.write(Atheta); //servo 1,2,3 for front Right left 
   servo2.write(Btheta);
  //servo3.write(110);
  
  //servo4.write(pos);
  //servo5.write(pos);
  //servo6.write(pos);
  
  //servo7.write(pos);
  //servo8.write(pos);
  //servo9.write(pos);
  
  //servo10.write(pos);
  //servo11.write(pos);
  //servo12.write(pos);
  
  
  //D = 90 - ((Ctheta * 180) / PI);

 
}
