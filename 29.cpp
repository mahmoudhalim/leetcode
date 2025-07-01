#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
  int strStr(string haystack, string needle) {
    for (int i = 0; i < haystack.size(); i++) {
      int j;
      for (j = 0; j < needle.size(); j++) {
        if (haystack[i + j] != needle[j]) 
          break;
      }
      if (j == needle.size()) 
        return i;
    }
    return -1;
  }
};

int main() {
  Solution s;
  cout << s.strStr("a", "a") << endl;
}