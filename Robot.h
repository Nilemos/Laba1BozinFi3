#pragma once
#include <iostream>

class TRobot
{
public:
  virtual void move() = 0;
  virtual void info();
  int GetCountLimb();
  void SetCountLimb(int i);
  int GetWeight();
  void SetWeight(int u);

  TRobot();
  TRobot(const TRobot& name);
  TRobot(int countLimb_, int weight_);

protected:
  int countLimb;
  int weight;
};