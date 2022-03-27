#pragma once
#include "peaceRobot.h"

class THelperBot : public TPeaceRobot
{
public:
  bool GetOptic();
  void SetOptic(bool optic_);
  THelperBot();
  THelperBot(int countLimb_, int weight_, bool processor_, bool optic_);
  THelperBot(const THelperBot& name);
protected:
  bool optic;
};