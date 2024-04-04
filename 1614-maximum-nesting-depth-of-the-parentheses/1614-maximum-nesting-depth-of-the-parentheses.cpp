class Solution {
public:
    int maxDepth(string s) 
    {
    int n=s.size(),left=0,mx=0;
        
      for(int i=0; i<n; i++)
      {
          if(s[i]=='(')
          {
              left++;
              mx=max(mx,left);
          }
          else if(s[i]==')')
          {
              left--;
          }  
      }
        
        return mx;
        
        
    }
};