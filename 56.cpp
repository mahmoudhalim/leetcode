#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> static merge(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    res.emplace_back(intervals[0]);
    for (auto &x : intervals) {
      if (res.back()[1] < x[0]) {
        res.emplace_back(x);
      }
      else {
        res.back()[1] = max(res.back()[1], x[1]);
      }
    }
    return res;
  }
};

int main() {
  vector<vector<int>> intervals = {{1,4},{0,0}};

  for (auto& x : Solution::merge(intervals)) {
    printf("[%d,%d] ",x[0],x[1]);
  }
  printf("\n");
}