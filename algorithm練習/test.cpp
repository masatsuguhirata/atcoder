#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<double>& vd) {
  for(auto x: vd) os << x << std::endl;
  return os;
}

int main(void) {
  std::vector<double> v = {1.0, 1.1, 1.2};
  std::cout << v << std::endl;

  return 0;
}
