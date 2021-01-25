class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode curr_node = head;
        
        
       while(l1!=null && l2!=null)
       {
        if(l1.val < l2.val)
        {
            curr_node.next = l1;
            l1 = l1.next;
        }
        else if(l1.val >= l2.val)
        {
            curr_node.next = l2;
            l2 = l2.next;
        }
       
           curr_node = curr_node.next;
       }
           if(l1!=null)
           {
               curr_node.next = l1;
               l1 = l1.next;
           }
           if(l2!=null)
           {
               curr_node.next = l2;
               l2 = l2.next;
           }
           if(head!=null)
           {
               head = head.next;
           }
           return head;
    }
        
