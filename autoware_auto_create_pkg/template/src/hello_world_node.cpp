#include "hello_world/hello_world_node.hpp"

namespace hello_world
{

HelloWorldNode::HelloWorldNode(const rclcpp::NodeOptions & options)
:  Node("hello_world", options),
  verbose(true)
{
  print_hello();
}

int32_t HelloWorldNode::print_hello() const
{
  return hello_world::print_hello();
}

}  // namespace hello_world

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(hello_world::HelloWorldNode)
