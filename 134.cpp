#include <vector>
#include <limits.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    static int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int sum = INT_MAX;
        int temp = 0;
        int index = -1;
        for (size_t i = 0; i < gas.size()-1; i++)
        {
            temp += gas[i] - cost[i+1];
            if (temp < sum)     
            {
                sum = temp;
                index = i+1;
            }
            temp += gas[i];
        }
        temp = gas[index];
        int i = index+1;
        int n = 0;
        while (n++ != gas.size())
        {
            temp += gas[i] - cost[i];
            i=(i+1)%gas.size();
            if (temp < 0)
            {
                return -1;
            }
        }

        return index;
        }
};
int main(){
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    cout << Solution::canCompleteCircuit(gas, cost)<<'\n';

}