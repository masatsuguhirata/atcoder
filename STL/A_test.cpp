#include <iostream>
#include <set>

int main()
{
  std::set<int> s = {1, 2, 3};

  // キー2の要素が含まれているか
  if (s.contains(2)) {
    std::cout << "contain" << std::endl;
  }
  else {
    std::cout << "doesn't contain" << std::endl;
  }
}
