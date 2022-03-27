#pragma once
#include "warRobot.h"

class TSpyBot : public TWarRobot
{
public:
  int GetDynamicDisguise();
  void SetDynamicDisguise(int dynamicDisguise_);
  TSpyBot();
  TSpyBot(int countLimb_, int weight_, int numWeapon_, int dynamicDisguise_);
  TSpyBot(const TSpyBot& name);
protected:
  int dynamicDisguise;

};