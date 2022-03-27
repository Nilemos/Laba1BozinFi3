#pragma once
#include "Robot.h"

class TPeaceRobot : public TRobot
{
public:
  bool GetProcessor();
  void SetProcessor(bool processor_);

  TPeaceRobot();
  TPeaceRobot(int countLimb_, int weight_, bool processor_);
  TPeaceRobot(const TPeaceRobot& name);
protected:
  bool processor;
};