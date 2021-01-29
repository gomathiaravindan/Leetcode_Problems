class Solution {
    public ListNode partition(ListNode head, int x) {
        
        ListNode small = new ListNode();
        ListNode high = new ListNode();
        
        ListNode smalltemp = small, hightemp = high;
        ListNode temp = head;
        
        while(temp!=null)
        {
            if(temp.val < x)
            {
                small.next = temp;
                small = temp;
            }
            else
            {
                high.next = temp;
                high = temp;
                
            }
            temp = temp.next;
        }
        high.next = null;
        small.next = hightemp.next;
        
        return smalltemp.next;
        
    }
}
