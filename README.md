# ros2-pkg-creator
Generalized package, forked from autoware auto project, for creating ROS2 packages using components and ament_cmake_auto.

Original package can be found here:
[link](https://gitlab.com/autowarefoundation/autoware.auto/AutowareAuto/-/tree/master/src/tools/autoware_auto_create_pkg)

# build the package
Build the package anywhere in the workspace where it is supposed to be used.

# usage
To use the tool, run the following:
```
cd ros2_workspace/src/<path_to_folder_containing_your_new_package>
ros2 run ros2_pkg_creator main.py --pkg-name PKG_NAME --maintainer MAINTAINER --email EMAIL --description DESCRIPTION
```
