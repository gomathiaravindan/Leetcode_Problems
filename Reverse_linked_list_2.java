class Solution {
    public ListNode reverseBetween(ListNode head, int m, int n) {
        
        if(head==null)
            return null;
        
        ListNode temp=new ListNode();
        temp.next=head;
        
        ListNode pre=temp;
        int i=0;
        while(i<m-1)
        { pre=pre.next;
            i++;}
        
        ListNode start=pre.next;
        ListNode then=start.next;
        
        for(i=0;i<n-m;i++){
            start.next=then.next;
            then.next=pre.next;
            pre.next=then;
            then=start.next;
        }
        return temp.next;
    }
}
