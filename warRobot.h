#pragma once
#include "Robot.h"
class TWarRobot : public TRobot {
public:
  void move() override;
  void info();
  int GetNumWeapon();
  void SetNumWeapon(int numWeapon_);
  TWarRobot();
  TWarRobot(int countLimb_, int weight_, int numWeapon_);
  TWarRobot(const TWarRobot& name);

protected:
  int numWeapon;
};