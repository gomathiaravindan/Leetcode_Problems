public class Solution {
    public ListNode detectCycle(ListNode head) {
        
        if(head==null)
            return head;
        
        ListNode slow = head;
        ListNode fast = head;
        
       
        
        while(fast!=null && fast.next!=null && slow!=null)
        {
           fast = fast.next.next;
            slow = slow.next;
            if(slow == fast)
            {
                slow = head;
                
                while(slow.next!=fast.next)
                {
                    fast = fast.next;
                    slow = slow.next;
                }
                return fast.next;
            }
            if(fast==head)
                return head;
        }
    
    return null;
    }
}
