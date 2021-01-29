class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        
        ListNode temp = head;
        ListNode temp1 = head;
        ListNode pntr = null;
        int swap=0;
        
        for(int i=1;i<k;i++)
        {
            if(temp!=null)
                temp = temp.next;
        }
        
        while(temp!=null)
        {
            if(pntr==null)
                pntr = head;
            else
                pntr = pntr.next;
            temp = temp.next;
        }
        
        for(int i=1;i<k;i++)
        {
            temp1 = temp1.next;
        }
        
        swap = temp1.val;
        temp1.val = pntr.val;
        pntr.val = swap;
        
        return head;
    }
}
