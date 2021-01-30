class Solution {
    public ListNode insertionSortList(ListNode head) {
        
        if(head==null || head.next ==null)
            return head;
        ListNode temp1 = head.next;
        ListNode temp2 = head;
        
        int swap = 0;
        
       
            while(temp1!=null)
            {
                ListNode temp = head;
                while(temp!=temp1)
                {
                    if(temp.val > temp1.val)
                    {
                        swap = temp.val;
                        temp.val = temp1.val;
                        temp1.val = swap;
                    }
               else { 
                   temp = temp.next;
                   }
                }
                temp1 = temp1.next;
            }
          
        return head;
    }
}
