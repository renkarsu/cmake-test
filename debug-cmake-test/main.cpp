#include <iostream>

#include "hello.hpp"

int main() {
  hello();

  int sum = 0;
  for (size_t i = 0; i < 10; ++i) {
    sum += i;
  }
  std::cout << "sum is " << sum << '\n';
}
