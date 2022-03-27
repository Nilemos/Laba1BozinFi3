#include "Robot.h"
#include <iostream>

void TRobot::info()
{
  std::cout << "countLimb = " << GetCountLimb() << "weight = " << GetWeight() << std::endl;
}

int TRobot::GetCountLimb()
{
  return countLimb;
}

void TRobot::SetCountLimb(int i)
{
  countLimb = i;
}

int TRobot::GetWeight()
{
  return weight;
}

void TRobot::SetWeight(int u)
{
  weight = u;
}

TRobot::TRobot()
{
  countLimb = 4;
  weight = 2000;
}

TRobot::TRobot(const TRobot& name)
{
  countLimb = name.countLimb;
  weight = name.weight;
}

TRobot::TRobot(int countLimb_, int weight_)
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
}
