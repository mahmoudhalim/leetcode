#include <cmath>
#include <iostream>
using namespace std;
class Solution {
public:
  bool isHappy(int n) {
    int sum;
    do {
      sum = 0;
      while (n > 0) {
        sum += pow((n % 10), 2);
        n /= 10;
      }
      n = sum;
    } while (sum % 10 != sum);
      return sum == 1 || sum == 7;
  }
};

int main() {
  Solution s;
  cout << s.isHappy(1111111) << endl;
}