// Commit 5: C++ file with good format
// This should pass clang-format check
#include <iostream>

void good_function(int x, int y) {
  int result = x + y;
  std::cout << result << std::endl;
}

class GoodClass {
public:
  int value;

  void method();
};
