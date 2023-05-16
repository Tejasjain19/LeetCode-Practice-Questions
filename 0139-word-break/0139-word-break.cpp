class Solution {
public:
    unordered_map <string , int > dp;
    
    
  int solve(string a , vector<string>& b)
    {
        int n = a.size();
        
        if(n==0)
            return 1 ;
        
        if(dp[a]!=0)
            return dp[a];
            
       for(int i=1; i<=n; i++)
       {
           int temp=0;
           string ss = a.substr(0,i);
         for(int j=0; j<b.size(); j++)
         {
             if(ss.compare(b[j])==0)
             {
                 temp=1;
                 break;
             }
             
           
         }
         
           if(temp==1 && solve(a.substr(i,n-i),b)==1)
                 return dp[a]=1;
       }
            
             return dp[a]=-1;
        
        
      }
    
    
    
    bool wordBreak(string a, vector<string>& b) 
    {
       int x = solve(a,b);
       
       if(x==1)
       return true;
        
        
        return false;
    }
};