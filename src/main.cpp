#include <iostream>
#include "core.h"

int main(int argc, char** argv) {
  int val = add(1, 3);

  Vector2 vec(0.0, 0.0);
  vec.set(2.5, 1.0);
  std::tuple<float, float> coords = vec.get();

  std::cout << val << std::endl;
  std::cout << std::get<0>(coords) << std::endl;
  std::cout << std::get<1>(coords) << std::endl;

  return 0;
}
