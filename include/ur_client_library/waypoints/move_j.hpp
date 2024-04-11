#pragma once

#include "waypoint.hpp"
#include "../ur/ur_driver.h"

class move_j : private waypoint
{
  move_j(std::vector<double&> positions, double time, bool tool_contact, bool force_mode)
    : waypoint(positions, time, tool_contact, force_mode)
  {
  }

  void send_point() override
  {
  }
};