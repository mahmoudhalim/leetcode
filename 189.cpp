#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    if (nums.size() <= 1)
      return;
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin()+k, nums.end());
  }
};

int main() {
  Solution s;
  vector<int> v = {1, 2};
  s.rotate(v, 3);
  for (const auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}