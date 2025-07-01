#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  static int maxProfit(vector<int> &prices) {
    int profit = 0;
    for (int i = 0; i < prices.size() - 1; i++) {
      if (prices[i] < prices[i + 1]) {
        profit += prices[i + 1] - prices[i];
      }
    }
    return profit;
  }
};

int main() {
  vector<int> prices = {1, 2, 3, 4, 5};
  cout << Solution::maxProfit(prices)<<'\n';
}