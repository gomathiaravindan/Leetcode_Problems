public class Solution {
    public boolean hasCycle(ListNode head) {
        
        if(head==null)
            return false;
        
        
        ListNode slow = head;
        ListNode fast = head.next;
        
        while(fast!=null && fast.next!=null && fast.next.next!=null)
        {
           
            if(slow == fast)
            {
                return true;
                
            }
            fast = fast.next.next;
            slow = slow.next;
        }
        return false;
    
    }
}
