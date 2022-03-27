#include "peaceRobot.h"

bool TPeaceRobot::GetProcessor()
{
  return processor;
}

void TPeaceRobot::SetProcessor(bool processor_)
{
  processor = processor_;
}

TPeaceRobot::TPeaceRobot() : TRobot()
{
  processor = true;
}

TPeaceRobot::TPeaceRobot(int countLimb_, int weight_, bool processor_) : TRobot()
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetProcessor(processor_);
}

TPeaceRobot::TPeaceRobot(const TPeaceRobot& name)
{
  processor = name.processor;
}
