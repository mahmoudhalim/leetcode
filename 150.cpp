#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int> num;
      for(string& t : tokens) {
        if (t == "+" || t == "*" || t == "/" || t == "-") {
            int b = num.top();
            num.pop();
            int a = num.top();
            num.pop();
            num.push(do_op(a, b, t));
        }
        else {
            num.push(stoi(t));
        }
      }
      return num.top();
    }

    int do_op(int a, int b, const string &op) {
      if (op == "+") 
         return a+b;
      if (op == "-") 
        return a - b;
      if (op == "*") 
        return a * b;
    return a / b;
    }
};
int main() {
  vector<string> s = {"10", "6", "9",  "3", "+", "-11", "*",
                      "/",  "*", "17", "+", "5", "+"};
  Solution ss;
  cout << ss.evalRPN(s) << '\n';
  }