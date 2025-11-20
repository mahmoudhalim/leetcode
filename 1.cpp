
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
      int c = target - nums[i];
      if (m.count(c) != 0) {
        return {i, m[c]};
      }
      m[nums[i]] = i;
    }
    return {};
  }
};

int main(int argc, char *argv[]) {
  vector<int> nums = {3, 3};
  int target = 6;
  Solution s;

  auto ans = s.twoSum(nums, target);
  for (int x : ans) {
    cout << x << " ";
  }
  cout << '\n';
  return 0;
}
