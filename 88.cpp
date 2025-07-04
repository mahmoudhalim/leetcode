#include <vector>
#include <iostream>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m-1, j = n-1;
    int k = m + n - 1;
    while (j >= 0)
    {
        if (i>= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else {
            nums1[k--] = nums2[j--];
        }
        }
}

int main(){
    vector<int> a = {0};
    vector<int> b = {1};
    merge(a, 0, b, 1);
    for(int x: a)
        cout << x << " ";
}
