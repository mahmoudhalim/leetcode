class Solution80 {
    public static ListNode deleteDuplicates(ListNode head) {
        if(head == null) return null;
        ListNode dummyHead = new ListNode(0, head);
        ListNode left = dummyHead;
        ListNode right = head;
        while (right != null) {
            while (right.next != null && right.next.val == right.val) {
                right = right.next;
            }
            if (left.next == right) {
                left = left.next;
            } else {
                left.next = right.next;
            }
            right = right.next;

        }
        return dummyHead.next;
    }

    public static void main(String[] args) {
        ListNode l = new ListNode(1,
                new ListNode(2,
                        new ListNode(3,
                                new ListNode(3,
                                        new ListNode(4,
                                                new ListNode(4,
                                                        new ListNode(5)))))));
        System.out.println(l.toString());
        System.out.println(deleteDuplicates(l).toString());
    }
}