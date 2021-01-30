class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        
        ListNode node = null;
        ListNode temp = list1;
        ListNode temp1 = list2;
        ListNode prev = null;
             int i = 0;
        
        for(i=0;i<b;i++)
        {
            temp = temp.next;
        }
        node = temp.next;
       
        temp = list1;
        for(i=0;i<a;i++)
        { 
            prev = temp;
            temp = temp.next;
        }
           
                if(list2!=null)
                {
                    prev.next = list2;
                }
               while(list2.next!=null)
               {
                   list2 = list2.next;
               }
               list2.next = node;
            
        
        
       return list1;
    }
}
