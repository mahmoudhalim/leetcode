from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        arr = self.inOrder(root)
        return arr[k-1]

    def inOrder(self, root: Optional[TreeNode], arr: List[int] = []) -> List[int]:
        if root:
            self.inOrder(root.left, arr)
            arr.append(root.val)
            self.inOrder(root.right, arr)
        return arr
        
    # def inOrder(self, root: Optional[TreeNode], arr: List[int] = []) -> List[int]:
    #     if root:
    #         self.inOrder(root.left, arr)
    #         arr.append(root.val)
    #         self.inOrder(root.right, arr)
    #     return arr


if __name__ == "__main__":
    t = TreeNode(4, TreeNode(2, None, TreeNode(3)), TreeNode(5))
    s = Solution()
    # print(s.inOrder(t))
    print(s.kthSmallest(t, 1))
