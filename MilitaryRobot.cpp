#include "MilitaryRobot.h"
#include <iostream>

void TMilitaryRobot::move()
{
  std::cout << "militaryRobot move" << std::endl;

}

void TMilitaryRobot::info()
{
  std::cout << "countLimb = " << GetCountLimb() << " weight = " << GetWeight() << " numWeapon = " << GetNumWeapon() << " armorThickness =" << GetArmorThickness() << std::endl;
}

void TMilitaryRobot::shooting()
{
  std::cout << "the Sol1 is shooting now : targer down" << std::endl;
}

int TMilitaryRobot::GetArmorThickness()
{
  return armorThickness;
}

void TMilitaryRobot::SetArmorThickness(int armorThickness_)
{
  armorThickness = armorThickness_;
}

TMilitaryRobot::TMilitaryRobot() : TWarRobot()
{
  armorThickness = 20;
}

TMilitaryRobot::TMilitaryRobot(int countLimb_, int weight_, int numWeapon_, int armorThickness_) : TWarRobot()
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetNumWeapon(numWeapon_);
  SetArmorThickness(armorThickness_);
}

TMilitaryRobot::TMilitaryRobot(const TMilitaryRobot& name)
{
  armorThickness = name.armorThickness;
}
