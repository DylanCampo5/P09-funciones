#include <iostream>
#include <cctype>
#include "change_case.h"

int main() {
  std::string input;
  std::cin >> input;
  std::string result = change_case(input);
  std::cout << result << '\n';
  return 0;
}
