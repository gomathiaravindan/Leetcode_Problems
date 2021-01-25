class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        

ListNode curr = head;
        
        int count=0;
        
        while(curr!=null)
        {
            count++;
            curr = curr.next;
        }
        count-= n;
        curr = head;
        if(count > 0)
        {
        for(int i=1;i<count;i++)
        {
            curr = curr.next;
        }
            curr.next = curr.next.next;
        }
        
        else
        {
            if(count==0)
                head = head.next;
        }
        return head;
        
}
}
