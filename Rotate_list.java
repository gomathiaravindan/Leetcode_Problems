class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        
        if(head!= null && head.next == null)
            return head;
        if(head==null)
            return null;
        ListNode temp = new ListNode();
        ListNode curr = new ListNode();
        
        
        temp = curr = head;
        
        int i,count = 1,j;
        
        while(temp.next!=null)
        {
            temp = temp.next;
            count++;
        }
         k = k%count;
        
        for(i=0;i<count-k-1;i++)
        {
            curr = curr.next;
            
        }
        if(k==0)
            return head;
        else{
            temp.next = head;
            head = curr.next;
            curr.next = null;
        }
        return head;
    }
}
