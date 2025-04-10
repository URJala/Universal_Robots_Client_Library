cmake_minimum_required(VERSION 3.14.0)
project(ur_driver_examples)

# find_package(ur_client_library REQUIRED)


add_executable(driver_example
  full_driver.cpp)
target_link_libraries(driver_example ur_client_library::urcl)

add_executable(primary_pipeline_example
  primary_pipeline.cpp)
target_link_libraries(primary_pipeline_example ur_client_library::urcl)

add_executable(primary_pipeline_calibration_example
  primary_pipeline_calibration.cpp)
target_link_libraries(primary_pipeline_calibration_example ur_client_library::urcl)

add_executable(rtde_client_example
  rtde_client.cpp)
target_link_libraries(rtde_client_example ur_client_library::urcl)

add_executable(dashboard_example
  dashboard_example.cpp)
target_link_libraries(dashboard_example ur_client_library::urcl)

add_executable(spline_example
spline_example.cpp)
target_link_libraries(spline_example ur_client_library::urcl)

add_executable(tool_contact_example
tool_contact_example.cpp)
target_link_libraries(tool_contact_example ur_client_library::urcl)

add_executable(freedrive_example
freedrive_example.cpp)
target_link_libraries(freedrive_example ur_client_library::urcl)

add_executable(force_mode_example
force_mode_example.cpp)
target_link_libraries(force_mode_example ur_client_library::urcl)

add_executable(script_sender_example
script_sender.cpp)
target_link_libraries(script_sender_example ur_client_library::urcl)

add_executable(trajectory_point_interface_example
trajectory_point_interface.cpp)
target_link_libraries(trajectory_point_interface_example ur_client_library::urcl)

add_executable(instruction_executor
instruction_executor.cpp)
target_link_libraries(instruction_executor ur_client_library::urcl)
