#include <iostream>
#include <vector>

int main() {
  std::vector<int> vi = {1, 2, 3, 4, 5, 6};
  std::vector<int>::iterator i = vi.begin();
  *i = 9;
  std::cout << vi[0];
}