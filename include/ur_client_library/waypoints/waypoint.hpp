#pragma once

#include <vector>
#include <memory>
#include "../ur/ur_driver.h"

class waypoint
{
public:
  std::vector<double&> positions_;
  double waypoint_time_;
  bool tool_contact_;
  bool force_mode_;
  std::unique_ptr<urcl::control::TrajectoryPointInterface> interface_;
  waypoint(std::unique_ptr<urcl::control::TrajectoryPointInterface> ur_driver, std::vector<double&> positions,
           double time, bool tool_contact = false, bool force_mode = false)
  {
    positions_ = positions;
    waypoint_time_ = time;
    tool_contact_ = tool_contact;
    force_mode_ = force_mode;
    interface_.(ur_driver);
  }
  void set_tool_contact(bool enable)
  {
    tool_contact_ = enable;
  }

  void set_force_mode(bool enable)
  {
    force_mode_ = enable;
  }

  virtual void send_point();
};
