public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        int size1 = 0,size2=0,diff = 0,i=0;
        
        ListNode temp1 = headA;
        ListNode temp2 = headB;
        
        while(temp1!=null)
        {
            size1++;
            temp1 = temp1.next;
        }
        temp1 = headA;
        while(temp2!=null)
        {
            size2++;
            temp2 = temp2.next;
        }
        temp2 = headB;
        if(size1 > size2)
        {
            diff = size1 - size2;
            while(i<diff)
            {
                temp1 = temp1.next;
                i++;
            }
            
            while(temp1!=null && temp2!=null)
            {
                if(temp1==temp2)
                    break;
                temp1 = temp1.next;
                temp2 = temp2.next;
            }
        }
        
        else if(size2 > size1)
        {
            diff = size2 - size1;
            while(i<diff)
            {
                temp2 = temp2.next;
                i++;
            }
             while(temp1!=null && temp2!=null)
            {
                if(temp1==temp2)
                   break;
                temp1 = temp1.next;
                temp2 = temp2.next;
            }
            
        }
        else{
             while(temp1!=null && temp2!=null)
            {
                if(temp1==temp2)
                   break;
                temp1 = temp1.next;
                temp2 = temp2.next;
            }
        }
    return temp2;
}
}
