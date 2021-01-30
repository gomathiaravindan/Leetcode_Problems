class Solution {
    public TreeNode sortedListToBST(ListNode head) {

        if(head==null)
            return null;
        return helper(head,null);
    }
    public TreeNode helper(ListNode left,ListNode right){
        if(left==right)
            return null;
         ListNode slow=left;
         ListNode fast=left;
         while(fast!=right&&fast.next!=right){
            slow=slow.next;
            fast=fast.next.next;
        }
        TreeNode root=new TreeNode(slow.val);
        root.left=helper(left,slow);
        root.right=helper(slow.next,right);
        return root;
        
        
    }
    
}
