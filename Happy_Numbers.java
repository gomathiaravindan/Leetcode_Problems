class Solution {
    public boolean isHappy(int n) {
        
        int num = n,rem,sum = 0,count=0;
        
        while(sum!=1)
        {
            sum = 0;
            while(num!=0)
            {
                rem = num%10;
                sum+= Math.pow(rem,2);
                num/=10;
            }
            num = sum;
            
            if(++count ==31)
            {
                return false;
            }
        }
        return true;
      
    }
}
