from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    arr = []
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        self.inOrder(root)
        s = sorted(self.arr)
        return all(self.arr[i] == s[i] for i in range(len(s)))
    def inOrder(self, root: Optional[TreeNode]) -> None:
        if root:
            self.inOrder(root.left)
            self.arr.append(root.val)
            self.inOrder(root.right)


if __name__ == "__main__":
    t = TreeNode(0)
    s = Solution()
    print(s.isValidBST(t))
