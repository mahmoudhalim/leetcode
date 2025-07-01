#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    static int lengthOfLastWord(string s)
    {
        int l = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                l++;
            }
            else if (l > 0)
            {
                break;
            }
        }
        return l;
    }
};

int main(){
    string s = "a";
    cout << Solution::lengthOfLastWord(s) << "\n";
}