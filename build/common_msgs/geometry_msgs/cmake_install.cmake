# Install script for directory: /home/randalf/robotex/src/common_msgs/geometry_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/randalf/robotex/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/geometry_msgs/msg" TYPE FILE FILES
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Accel.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/AccelStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/AccelWithCovariance.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/AccelWithCovarianceStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Inertia.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/InertiaStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Point.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Point32.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PointStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Polygon.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PolygonStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Pose2D.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Pose.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PoseArray.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PoseStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PoseWithCovariance.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/PoseWithCovarianceStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Quaternion.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/QuaternionStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Transform.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/TransformStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Twist.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/TwistStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/TwistWithCovariance.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/TwistWithCovarianceStamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Vector3.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Vector3Stamped.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/Wrench.msg"
    "/home/randalf/robotex/src/common_msgs/geometry_msgs/msg/WrenchStamped.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/geometry_msgs/cmake" TYPE FILE FILES "/home/randalf/robotex/build/common_msgs/geometry_msgs/catkin_generated/installspace/geometry_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/randalf/robotex/devel/include/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/randalf/robotex/devel/share/roseus/ros/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/randalf/robotex/devel/share/common-lisp/ros/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/randalf/robotex/devel/share/gennodejs/ros/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/randalf/robotex/devel/lib/python2.7/dist-packages/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/randalf/robotex/devel/lib/python2.7/dist-packages/geometry_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/randalf/robotex/build/common_msgs/geometry_msgs/catkin_generated/installspace/geometry_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/geometry_msgs/cmake" TYPE FILE FILES "/home/randalf/robotex/build/common_msgs/geometry_msgs/catkin_generated/installspace/geometry_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/geometry_msgs/cmake" TYPE FILE FILES
    "/home/randalf/robotex/build/common_msgs/geometry_msgs/catkin_generated/installspace/geometry_msgsConfig.cmake"
    "/home/randalf/robotex/build/common_msgs/geometry_msgs/catkin_generated/installspace/geometry_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/geometry_msgs" TYPE FILE FILES "/home/randalf/robotex/src/common_msgs/geometry_msgs/package.xml")
endif()

