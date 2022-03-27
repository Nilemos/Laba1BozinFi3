#include "warRobot.h"

void TWarRobot::move()
{
  std::cout << "warRobot move" << std::endl; 
}

void TWarRobot::info()
{
  std::cout << "countLimb = " << GetCountLimb() << " weight = " << GetWeight() <<" numWeapon = " << GetNumWeapon() << std::endl;
}

int TWarRobot::GetNumWeapon()
{
  return numWeapon;
}

void TWarRobot::SetNumWeapon(int numWeapon_)
{
  numWeapon = numWeapon_;
}

TWarRobot::TWarRobot() : TRobot()
{
  numWeapon = 5;
}

TWarRobot::TWarRobot(int countLimb_, int weight_, int numWeapon_) : TRobot()
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetNumWeapon(numWeapon_);
}

TWarRobot::TWarRobot(const TWarRobot& name)
{
  numWeapon = name.numWeapon;
}
