from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next: ListNode = next

    def __str__(self) -> str:
        s = ""
        while(self):
            s+=str(self.val) + " -> "
            self = self.next
        return s
            
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        d = ListNode(0, head.next)
        node = head
        pre = None
        while node and node.next:
            ne = node.next
            node.next, ne.next = ne.next, node
            if pre:
                pre.next = ne
            pre = node
            node = node.next
        return d.next
if __name__ == "__main__":
    l = ListNode(1, ListNode(2, ListNode(3, ListNode(4))))
    S = Solution()
    a = S.swapPairs(l)
    print(a)