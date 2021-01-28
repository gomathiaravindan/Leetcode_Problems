class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        
        
        ListNode temp = new ListNode();
         temp.next = head;
        
        while(head!=null && head.next!=null)
        {
            
            while(head!=null && head.next!=null && head.val==head.next.val)
            {
    
                head.next = head.next.next;
                
            }
           
            head = head.next;
        }
        return temp.next;
    }
}
