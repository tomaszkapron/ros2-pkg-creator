#ifndef HELLO_WORLD__HELLO_WORLD_NODE_HPP_
#define HELLO_WORLD__HELLO_WORLD_NODE_HPP_

#include <hello_world/hello_world.hpp>

#include <rclcpp/rclcpp.hpp>

namespace hello_world
{

class HELLO_WORLD_PUBLIC HelloWorldNode : public rclcpp::Node
{
public:
  explicit HelloWorldNode(const rclcpp::NodeOptions & options);
  int32_t print_hello() const;

private:
  bool verbose;
};
}  // namespace hello_world

#endif  // HELLO_WORLD__HELLO_WORLD_NODE_HPP_
