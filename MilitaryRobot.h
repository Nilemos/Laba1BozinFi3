#pragma once
#include "warRobot.h"

class TMilitaryRobot : public TWarRobot
{
public:
  void move() override;
  void info();
  virtual void shooting();
  int GetArmorThickness();
  void SetArmorThickness(int armorThickness_);
  TMilitaryRobot();
  TMilitaryRobot(int countLimb_, int weight_, int numWeapon_, int armorThickness_);
  TMilitaryRobot(const TMilitaryRobot& name);
protected:
  int armorThickness;
};