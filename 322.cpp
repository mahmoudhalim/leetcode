#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  static int coinChange(vector<int> &coins, int amount) {
    sort(coins.begin(), coins.end());
    int dp[amount + 1];
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
      dp[i] = INT_MAX;
      for (int c: coins) {
        if (i - c < 0)
          break;
        if (dp[i - c] != INT_MAX) {
          dp[i] = min(dp[i], 1 + dp[i - c]);
        }
      }
    }
    return dp[amount]==INT_MAX? -1: dp[amount];
  }
};

int main() {
  vector<int> v = {186, 419, 83, 408};
  cout << Solution::coinChange(v, 6249) << endl;
}