#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
  string intToRoman(int num) {
    int v[] = {1000, 500, 100, 50, 10, 5, 1};
    char s[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    int p = 0;
    stringstream res;
    while (num > 0) {
      if (num >= v[p]) {
        res << s[p];
        num -= v[p];
      } else if (is4Or9(num)) {
        if (num >= 900) {
          res << "CM";
          num -= 900;
        } else if (num >= 400) {
          res << "CD";
          num -= 400;
        } else if (num >= 90) {
          res << "XC";
          num -= 90;
        } else if (num >= 40) {
          res << "XL";
          num -= 40;
        } else if (num >= 9) {
          res << "IX";
          num -= 9;
        } else if (num >= 4) {
          res << "IV";
          num -= 4;
          }
      } else {
        p++;
      }
    }
    return res.str();
  }

  bool is4Or9(int number) {
    string s = to_string(number);
    return s[0] == '4' || s[0] == '9';
  }
};

int main() {
  Solution s;
  cout << s.intToRoman(900)<< endl;
}