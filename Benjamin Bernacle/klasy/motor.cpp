#include <iostream>
#include <string>
using namespace std;

class Motor
{
  bool czyDwusuw;
  bool czyCross;
  int pojemnosc;
  float ilePaliwa;
  float pojemnoscBaku;

public:
  string kolor;
  bool czyŁyse;


  void tankuj(float wlewawanePaliwo)
  {
    if (wlewawanePaliwo < pojemnoscBaku - ilePaliwa)
    {
      ilePaliwa += wlewawanePaliwo;
      cout << "Wlałeś " << wlewawanePaliwo << endl;
    }
    else
    {
      float temp = pojemnoscBaku - ilePaliwa;
      ilePaliwa += temp;
      cout << "Wlałeś " << temp << " bo nie miałeś miejsca w baku\n";
    }
  }

  void setCzyDwusuw(bool a)
  {
    czyDwusuw = a;
  }
  void setCzyCross(bool a)
  {
    czyCross = a;
  }
  void setPojemnosc(int a)
  {
    pojemnosc = a;
  }

  bool getCzyDwusuw() const
  {
    return czyDwusuw;
  }
  bool getCzyCross() const
  {
    return czyCross;
  }
  int getPojemnosc() const
  {
    return pojemnosc;
  }
};


Motor porownajMotory(const Motor &motor1, const Motor &motor2)
{
  int punktyMotor1 = 0;
  int punktyMotor2 = 0;

  if (motor1.getPojemnosc() > motor2.getPojemnosc())
    punktyMotor1++;
  else if (motor1.getPojemnosc() < motor2.getPojemnosc())
    punktyMotor2++;


  if (motor1.getCzyDwusuw() && !motor2.getCzyDwusuw())
    punktyMotor1++;
  else if (!motor1.getCzyDwusuw() && motor2.getCzyDwusuw())
    punktyMotor2++;


  if (motor1.getCzyCross() && !motor2.getCzyCross())
    punktyMotor1++;
  else if (!motor1.getCzyCross() && motor2.getCzyCross())
    punktyMotor2++;


  if (!motor1.czyŁyse && motor2.czyŁyse)
    punktyMotor1++;
  else if (motor1.czyŁyse && !motor2.czyŁyse)
    punktyMotor2++;


  if (motor1.kolor == "czerwony" && motor2.kolor != "czerwony")
    punktyMotor1++;
  else if (motor1.kolor != "czerwony" && motor2.kolor == "czerwony")
    punktyMotor2++;


  cout << "Punkty motor1: " << punktyMotor1 << endl;
  cout << "Punkty motor2: " << punktyMotor2 << endl;

 
  if (punktyMotor1 > punktyMotor2)
    return motor1;
  else
    return motor2;
}

int main()
{
  Motor motor1, motor2;


  motor1.kolor = "czerwony";
  motor1.czyŁyse = false;
  motor1.setCzyDwusuw(true);
  motor1.setCzyCross(true);
  motor1.setPojemnosc(600);

 
  motor2.kolor = "niebieski";
  motor2.czyŁyse = true;
  motor2.setCzyDwusuw(false);
  motor2.setCzyCross(false);
  motor2.setPojemnosc(500);

 
  Motor lepszyMotor = porownajMotory(motor1, motor2);

  
  cout << "Lepszy motor to ten o kolorze: " << lepszyMotor.kolor << endl;

  return 0;
}
