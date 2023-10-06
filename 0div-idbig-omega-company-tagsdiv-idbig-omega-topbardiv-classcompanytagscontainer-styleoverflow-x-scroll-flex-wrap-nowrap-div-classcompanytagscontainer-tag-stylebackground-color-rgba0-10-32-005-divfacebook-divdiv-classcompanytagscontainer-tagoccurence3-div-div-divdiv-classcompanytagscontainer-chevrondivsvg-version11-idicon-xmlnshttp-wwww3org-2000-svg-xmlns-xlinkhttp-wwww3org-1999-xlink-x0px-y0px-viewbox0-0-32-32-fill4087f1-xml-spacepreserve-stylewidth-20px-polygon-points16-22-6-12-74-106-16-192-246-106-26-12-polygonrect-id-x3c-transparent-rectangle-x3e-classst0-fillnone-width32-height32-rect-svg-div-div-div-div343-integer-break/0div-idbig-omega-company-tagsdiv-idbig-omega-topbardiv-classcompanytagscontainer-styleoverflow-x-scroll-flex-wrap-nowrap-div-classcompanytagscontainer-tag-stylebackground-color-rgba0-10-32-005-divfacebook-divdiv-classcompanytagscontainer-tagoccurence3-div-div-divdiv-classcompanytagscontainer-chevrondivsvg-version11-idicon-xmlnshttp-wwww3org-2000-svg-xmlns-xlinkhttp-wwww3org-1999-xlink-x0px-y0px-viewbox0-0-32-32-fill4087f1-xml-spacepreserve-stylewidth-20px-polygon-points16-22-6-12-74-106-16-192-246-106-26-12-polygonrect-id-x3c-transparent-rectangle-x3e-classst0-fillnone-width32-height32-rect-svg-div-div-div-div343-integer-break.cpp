class Solution {
public:
    int integerBreak(int n) 
    {
        
        int ans=1;
    
        if(n==1)
            return 1; 
        
        if(n==2)
            return 1;
        
        
        if(n==3)
            return 2;
        
        
        int temp = n/3-1;
        int temp1 = n/3;
        
        if(n%3==0)
        {
           ans = pow(3,n/3);
       //     return ans;
        }
        
        if(n%3==1)
        {
            ans = pow(3,temp) * 4;
       //     return flag;
        }
        
           if(n%3==2)
        {
            ans = pow(3,temp1) * 2;
       //     return flag;
        }
        
        
        return ans; 
        
        
    }
};