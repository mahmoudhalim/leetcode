#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int jump(vector<int> &nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
      int jump = 0;
      for (int j = 1; j < nums[i]; j++) {
        if (i + j > nums.size()) {
          break;
        }
        jump = max(jump, j + nums[i + j]);
      }
      ans++;
      i += jump - 1;
    }
    return ans;
  }
};

int main() {
  vector<int> v = {2, 3, 0, 1, 4};
  Solution s;
  cout<<s.jump(v)<<endl;
  }