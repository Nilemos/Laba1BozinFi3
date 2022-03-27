#pragma once
#include "peaceRobot.h"

class TBotCleaner : public TPeaceRobot
{
public:
  int GetSensor();
  void SetSensor(int sensor_);
  TBotCleaner();
  TBotCleaner(int countLimb_, int weight_, bool processor_, int sensor_);
  TBotCleaner(const TBotCleaner& name);
protected:
  int sensor;
};