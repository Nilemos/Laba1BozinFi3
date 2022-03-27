#include <iostream>
#include <cstdlib>
#include "Robot.h"
#include "warRobot.h"
#include "peaceRobot.h"
#include "MilitaryRobot.h"

int main()
{
  TRobot* Bebr = new TWarRobot();
  TWarRobot Bibr = TWarRobot();
  TMilitaryRobot Mibr = TMilitaryRobot();
  TRobot* Fred = new TMilitaryRobot();
  Bebr->info();
  Fred->info();
  Bibr.move();
  Mibr.move();

  return 0;

}