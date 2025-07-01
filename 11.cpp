#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        long ans = -1;
        while (left < right)
        {
            long area = min(height[left], height[right]) * abs(right - left);
            ans = max(area, ans);
            if (height[left] <= height[right])
            {
                ++left;
            }
            else
                --right;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << s.maxArea(v);
}