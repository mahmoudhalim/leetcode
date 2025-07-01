#include <string>
#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
class Solution
{
public:
    static string removeWhiteSpace(string line)
    {
        string::iterator end_pos = std::remove(line.begin(), line.end(), '*');
        line.erase(end_pos, line.end());
        return line;
    }
    static string reverseWords(string s)
    {

        stack<string> vs;

        int last_space = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.at(i) == ' ' || i == s.size() - 1)
            {
                vs.push(s.substr(last_space+1, i-last_space));
                last_space = i;
                continue;
            }
        }

        stringstream ss;
        while (!vs.empty())
        {
            ss << vs.top() << " ";
            vs.pop();
        }
        s = ss.str();
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s.at(i) == ' ' && s.at(i+1) == ' ')
            {
                s.at(i) = '*';
            }
        }
        string res = removeWhiteSpace(s);
        res.erase(res.size() - 1, 1); // remove last space
        if (res.at(0) == ' ')
        {
            res.erase(0, 1);
        }

        return res;
        }
};

int main(){
    string s = "  hello world  ";
    cout << Solution::reverseWords(s) << '\n';
}