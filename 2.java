class Solution2 {
    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ans = new ListNode();
        ListNode p = ans;
        int carry = 0;
        int s = 0;
        while (l1 != null || l2 != null) {
            if (l1 == null) {
                s = l2.val + carry;
                l2 = l2.next;
            } else if (l2 == null) {
                s = l1.val + carry;
                l1 = l1.next;
            } else {
                s = l1.val + l2.val + carry;
                l1 = l1.next;
                l2 = l2.next;
            }
            carry = s / 10;
            s = s % 10;
            p.next = new ListNode(s);
            p = p.next;
        }
        if (carry == 1) {
            p.next = new ListNode(1);
        }
        return ans.next;
    }

    public static void main(String[] args) {
        ListNode l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
        ListNode l2 = new ListNode(9, new ListNode(9, new ListNode(4)));
        ListNode ans = addTwoNumbers(l1, l2);
        while (ans != null) {
            System.out.print(ans.val + " ");
            ans = ans.next;
        }
        System.out.println();

    }
}