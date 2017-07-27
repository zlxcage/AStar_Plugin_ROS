# CMake generated Testfile for 
# Source directory: /home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_rosbag/bag_migration_tests
# Build directory: /home/turtlebot/turtlebot_plugin_ws/build/ros_comm/test/test_rosbag/bag_migration_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_test_rosbag_nosetests_test.migrate_test.py "/home/turtlebot/turtlebot_plugin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag/nosetests-test.migrate_test.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/turtlebot/turtlebot_plugin_ws/build/ros_comm/test/test_rosbag/test/migrate_test.py --with-xunit --xunit-file=/home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag/nosetests-test.migrate_test.py.xml")
ADD_TEST(_ctest_test_rosbag_rostest_test_random_record.xml "/home/turtlebot/turtlebot_plugin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag/rostest-test_random_record.xml" "--return-code" "/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_record.xml --results-base-dir \"/home/turtlebot/turtlebot_plugin_ws/build/test_results\" /home/turtlebot/turtlebot_plugin_ws/build/ros_comm/test/test_rosbag/test/random_record.xml ")
ADD_TEST(_ctest_test_rosbag_rostest_test_random_play.xml "/home/turtlebot/turtlebot_plugin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag/rostest-test_random_play.xml" "--return-code" "/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_play.xml --results-base-dir \"/home/turtlebot/turtlebot_plugin_ws/build/test_results\" /home/turtlebot/turtlebot_plugin_ws/build/ros_comm/test/test_rosbag/test/random_play.xml ")
ADD_TEST(_ctest_test_rosbag_rostest_test_random_play_sim.xml "/home/turtlebot/turtlebot_plugin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/turtlebot/turtlebot_plugin_ws/build/test_results/test_rosbag/rostest-test_random_play_sim.xml" "--return-code" "/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/turtlebot/turtlebot_plugin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_play_sim.xml --results-base-dir \"/home/turtlebot/turtlebot_plugin_ws/build/test_results\" /home/turtlebot/turtlebot_plugin_ws/build/ros_comm/test/test_rosbag/test/random_play_sim.xml ")
