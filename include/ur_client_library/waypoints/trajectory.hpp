#pragma once

#include "waypoint.hpp"
#include <memory>

class trajectory
{
private:
  std::vector<std::unique_ptr<waypoint>> trajectory;

public:
  void add(std::unique_ptr<waypoint> point);
  void execute();
};