#include <iostream>

class iterator_poi_counter {
  int count_;
public:
  iterator_poi_counter() : count_(0) {}
  iterator_poi_counter& operator++() { ++count_; return *this; }
  iterator_poi_counter& operator--() { --count_; return *this; }
  int operator*() const { return count_; } // これな。
};

int main() {
  iterator_poi_counter ipc;
  ++ipc;
	++ipc;
	++ipc;
  std::cout << *ipc << std::endl;
  return 0;
}
