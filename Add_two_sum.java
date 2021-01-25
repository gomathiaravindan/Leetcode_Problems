class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
       ListNode head = new ListNode();
        ListNode temp = head;
        int val1, val2, carry = 0;
        while (l1 != null || l2 != null) {
            val1 = (l1 != null) ? l1.val : 0;
            val2 = (l2 != null) ? l2.val : 0;
            temp.next = new ListNode((val1 + val2 + carry) % 10);
            carry = (val1 + val2 + carry) >= 10 ? 1 : 0;  
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
            temp = temp.next;
        }
        
        if (carry == 1) {
            temp.next = new ListNode(carry);
        }
        
        return head.next;
    }
}
