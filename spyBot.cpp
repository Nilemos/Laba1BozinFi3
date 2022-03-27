#include "spyBot.h"

int TSpyBot::GetDynamicDisguise()
{
  return dynamicDisguise;
}

void TSpyBot::SetDynamicDisguise(int dynamicDisguise_)
{
  if ((dynamicDisguise_ >= 0) && (dynamicDisguise_ <= 100))
    dynamicDisguise = dynamicDisguise_;
}

TSpyBot::TSpyBot() : TWarRobot()
{
  dynamicDisguise = 60;
}

TSpyBot::TSpyBot(int countLimb_, int weight_, int numWeapon_, int dynamicDisguise_) : TWarRobot()
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetNumWeapon(numWeapon_);
  SetDynamicDisguise(dynamicDisguise_);
}

TSpyBot::TSpyBot(const TSpyBot& name)
{
  dynamicDisguise = name.dynamicDisguise;
}
