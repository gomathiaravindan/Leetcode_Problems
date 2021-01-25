class Solution {
    public ListNode swapPairs(ListNode head) {
        
      if(head == null || head.next == null)
           return head;
    
        
        ListNode temp = head;
        ListNode temp1 = head.next;
        int temp2=0;
            
            while(temp.next!=null)
            {
                temp2 = temp.val;
                temp.val = temp1.val;
                temp1.val = temp2;
            
            if(temp1.next!=null)
            {
                temp = temp1.next;
                temp1 = temp.next;
            }
            else
            {
                break;
            }
            }
        
        
        return head;
    }
}
