execute_process(COMMAND "/home/turtlebot/turtlebot_plugin_ws/build/ros_comm/tools/rosmsg/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/turtlebot/turtlebot_plugin_ws/build/ros_comm/tools/rosmsg/catkin_generated/python_distutils_install.sh) returned error code ")
endif()