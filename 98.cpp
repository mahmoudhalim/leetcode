#include <stack>
#include <vector>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
public:
  bool isValidBST(TreeNode *root) {
    stack<TreeNode *> s;
    vector<int> ans;
    TreeNode *node = root;
    while (node != nullptr || !s.empty()) {
      while (node != nullptr) {
        s.push(node);
        node = node->left;
      }
      node = s.top();
      s.pop();
      ans.push_back(node->val);
      node = node->right;
    }
    for (int i = 0; i < ans.size() - 1; i++) {
      if (ans[i+1] <= ans[i]) {
        return false;
      }
    }
    return true;
  }
};