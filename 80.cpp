
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int l = nums[0];
    int seen = 0;
    int k = 1;
    for (size_t i = 1; i < nums.size(); ++i) {
      if (nums[i] == l) {
        if (!seen) {
          seen = 1;
          nums[k] = nums[i];
          k++;
        }
      } else {
        seen = 0;
        l = nums[i];
        nums[k] = nums[i];
        k++;
      }
    }
    return k;
  }
};

int main() {
  vector<int> v = {0,0,1,1,1,1,2,3,3};
  Solution s;
  cout << s.removeDuplicates(v) << endl;
  for (const auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}