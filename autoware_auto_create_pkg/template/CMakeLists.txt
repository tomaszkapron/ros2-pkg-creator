cmake_minimum_required(VERSION 3.8)

project(hello_world)

# require that dependencies from package.xml be available
find_package(ament_cmake_auto REQUIRED)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
add_compile_options(-std=c++17)

ament_auto_find_build_dependencies(REQUIRED
  ${${PROJECT_NAME}_BUILD_DEPENDS}
  ${${PROJECT_NAME}_BUILDTOOL_DEPENDS}
)

set(HELLO_WORLD_LIB_SRC
  src/hello_world.cpp
)

set(HELLO_WORLD_LIB_HEADERS
  include/hello_world/hello_world.hpp
  include/hello_world/visibility_control.hpp
)

# generate library
ament_auto_add_library(${PROJECT_NAME} SHARED
  ${HELLO_WORLD_LIB_SRC}
  ${HELLO_WORLD_LIB_HEADERS}
)

set(HELLO_WORLD_NODE_SRC
  src/hello_world_node.cpp
)

set(HELLO_WORLD_NODE_HEADERS
  include/hello_world/hello_world_node.hpp
)

# generate component node library
ament_auto_add_library(${PROJECT_NAME}_node SHARED
  ${HELLO_WORLD_NODE_SRC}
  ${HELLO_WORLD_NODE_HEADERS}
)

rclcpp_components_register_node(${PROJECT_NAME}_node
  PLUGIN "hello_world::HelloWorldNode"
  EXECUTABLE ${PROJECT_NAME}_node_exe
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# ament package generation and installing
ament_auto_package(INSTALL_TO_SHARE
  launch
)
