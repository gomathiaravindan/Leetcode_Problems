class Solution {
    public int lengthOfLastWord(String s) {
        
        int len=s.length(), result=0;
    
    while(len>0){
        if(s.charAt(--len)!=' ') result++;
        else if(result>0) return result;
    }
    return result;
    
    
    
}
}
