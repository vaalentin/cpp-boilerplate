#include <tuple>
#include "core.h"

int add(int a, int b) {
  return a + b;
}

Vector2::Vector2(float x, float y) {
  set(x, y);
}

Vector2::~Vector2() {

}

void Vector2::set(float x, float y) {
  m_x = x;
  m_y = y;
}

std::tuple<float, float> Vector2::get() {
  return std::tuple<float, float> (m_x, m_y);
}
