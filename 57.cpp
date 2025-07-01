
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals,
                             vector<int> &newInterval) {
    int n = intervals.size(), i = 0;
    vector<vector<int>> res;

    // Case 1: no overlapping case before the merge intervals
    // Compare ending point of intervals to starting point of newInterval
    while (i < n && intervals[i][1] < newInterval[0]) {
      res.push_back(intervals[i]);
      i++;
    }

    // Case 2: overlapping case and merging of intervals
    while (i < n && newInterval[1] >= intervals[i][0]) {
      newInterval[0] = min(newInterval[0], intervals[i][0]);
      newInterval[1] = max(newInterval[1], intervals[i][1]);
      i++;
    }
    res.push_back(newInterval);

    // Case 3: no overlapping of intervals after newinterval being merged
    while (i < n) {
      res.push_back(intervals[i]);
      i++;
    }
    return res;
  }
};
int main() {
  vector<vector<int>> intervals = {{1,5}};
  vector<int> newIntervals = {6,8};
  Solution s;
  vector<vector<int>> res = s.insert(intervals, newIntervals);
  for (auto &x : res) {
    cout << " (" << x[0] << " " << x[1] << ") ";
  }
}