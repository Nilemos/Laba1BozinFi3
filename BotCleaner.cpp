#include "BotCleaner.h"

int TBotCleaner::GetSensor()
{
  return sensor;
}

void TBotCleaner::SetSensor(int sensor_)
{
  sensor = sensor_;
}

TBotCleaner::TBotCleaner() : TPeaceRobot()
{
  sensor = 6;
}

TBotCleaner::TBotCleaner(int countLimb_, int weight_, bool processor_, int sensor_) : TPeaceRobot()
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetProcessor(processor_);
  SetSensor(sensor_);
}

TBotCleaner::TBotCleaner(const TBotCleaner& name)
{
  sensor = name.sensor;
}
