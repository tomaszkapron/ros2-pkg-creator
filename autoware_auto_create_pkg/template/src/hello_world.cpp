#include "hello_world/hello_world.hpp"

#include <iostream>

namespace autoware
{

int32_t hello_world::print_hello()
{
  std::cout << "Hello World" << std::endl;
  return 0;
}

}  // namespace autoware
