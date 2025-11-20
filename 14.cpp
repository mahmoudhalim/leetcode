
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>
using namespace std;

class TrieNode {
private:
  unordered_map<char, TrieNode *> children;
  int is_leaf;

public:
  TrieNode() { is_leaf = 0; }
  void insert(string_view key) {
    TrieNode *curr = this;
    for (char c : key) {
      if (curr->children.count(c) == 0) {
        TrieNode *Node = new TrieNode();
        curr->children[c] = Node;
      }
      curr = curr->children[c];
    }
    curr->is_leaf = 1;
  }

  string lcp() {
    stringstream s;
    TrieNode *curr = this;
    while (curr->is_leaf == 0) {
      if (curr->children.size() > 1) {
        break;
      } else if (curr->children.size() == 1) {
        auto it = curr->children.begin();
        s << it->first;
        curr = it->second;
      }
    }
    return s.str();
  }
};

class Solution {
public:
  string longestCommonPrefixTrie(vector<string> &strs) {
    auto root = new TrieNode();
    for (const auto &w : strs) {
      root->insert(w);
    }
    return root->lcp();
  }

  string longestCommonPrefix(vector<string> &strs) {
    sort(strs.begin(), strs.end());
    stringstream s;
    string f = strs[0];
    string l = strs[strs.size() - 1];
    for (size_t i = 0; i < min(f.size(), l.size()); ++i) {
      if (f[i] == l[i]) {
        s << f[i];
        continue;
      }
      break;
    }
    return s.str();
  }
};

int main() {
  vector<string> strs = {"flower", "flow", "flight"};
  Solution s;
  cout << s.longestCommonPrefix(strs) << endl;
}
