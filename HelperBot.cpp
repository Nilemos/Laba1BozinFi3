#include "HelperBot.h"

bool THelperBot::GetOptic()
{
  return optic;
}

void THelperBot::SetOptic(bool optic_)
{
  optic = optic_;
}

THelperBot::THelperBot() : TPeaceRobot()
{
  optic = true;
}

THelperBot::THelperBot(int countLimb_, int weight_, bool processor_, bool optic_)
{
  SetCountLimb(countLimb_);
  SetWeight(weight_);
  SetProcessor(processor_);
  SetOptic(optic_);
}

THelperBot::THelperBot(const THelperBot& name)
{
  optic = name.optic;
}
