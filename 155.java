class MinStack {
    class Node {
        int val;
        Node next;
        int min;

        Node() {
        }
        Node(int val, MinStack.Node next, int min) {
            this.val = val;
            this.next = next;
            this.min = min;
        }
    }

    Node head;
    public MinStack() {
        head = new Node(-1, null, Integer.MAX_VALUE);
    }
    
    public void push(int val) {
        Node newNode = new Node(val, head, Math.min(val, head.min));
        head = newNode;
    }
    
    public void pop() {
        head = head.next;
    }
    
    public int top() {
        return head.val;
    }
    
    public int getMin() {
        return head.min;
    }

    public static void main(String[] args) {
        MinStack o = new MinStack();
        o.push(-2);
        o.push(0);
        o.push(-3);
        System.out.println(o.getMin());
        o.pop();
        System.out.println(o.top());
        System.out.println(o.getMin());

    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */