class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        
        ListNode temp = new ListNode();
        ListNode prev = new ListNode();
        ListNode temp1 = new ListNode();
        temp.next = head;
        prev = temp;
        
        while(head!=null && head.next!=null)
        {
            if(head!=null && head.val!=head.next.val)
            {
                prev = head;
                head = head.next;
            }
            else
            {
                int value = head.val;
                while(head!=null && head.val==value)
                {
                    prev.next = head.next;
                    head= head.next;
                }
            }
            
        }
        return temp.next;
    }
}
