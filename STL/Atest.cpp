#include <iostream>
#include <vector>

// stream に vector が << されたときは
template<typename T>
std::ostream& operator<<(std::ostream& stream, const std::vector<T>& vec) {
  for ( const T& item : vec ) { // vec内の各要素:itemに対し
    stream << item << ' '; // それをstreamに<<する。(ついでに' 'も)
  }
  return stream;
}

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::cout << vec << std::endl;
    return 0;
}
