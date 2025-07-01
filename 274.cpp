#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int hIndex(vector<int> &citations) {
    int N = citations.size();
    int ans = 0;
    sort(citations.begin(), citations.end());
    for (int i = N - 1; i >= 0; i--) {
        if (citations[i] > ans) {
            ans++;
        }
    }
    return ans;
  }
};

int main() {
  vector<int> c = {3, 0, 6, 1, 5};
  Solution s;
  cout<<s.hIndex(c)<<endl;
}