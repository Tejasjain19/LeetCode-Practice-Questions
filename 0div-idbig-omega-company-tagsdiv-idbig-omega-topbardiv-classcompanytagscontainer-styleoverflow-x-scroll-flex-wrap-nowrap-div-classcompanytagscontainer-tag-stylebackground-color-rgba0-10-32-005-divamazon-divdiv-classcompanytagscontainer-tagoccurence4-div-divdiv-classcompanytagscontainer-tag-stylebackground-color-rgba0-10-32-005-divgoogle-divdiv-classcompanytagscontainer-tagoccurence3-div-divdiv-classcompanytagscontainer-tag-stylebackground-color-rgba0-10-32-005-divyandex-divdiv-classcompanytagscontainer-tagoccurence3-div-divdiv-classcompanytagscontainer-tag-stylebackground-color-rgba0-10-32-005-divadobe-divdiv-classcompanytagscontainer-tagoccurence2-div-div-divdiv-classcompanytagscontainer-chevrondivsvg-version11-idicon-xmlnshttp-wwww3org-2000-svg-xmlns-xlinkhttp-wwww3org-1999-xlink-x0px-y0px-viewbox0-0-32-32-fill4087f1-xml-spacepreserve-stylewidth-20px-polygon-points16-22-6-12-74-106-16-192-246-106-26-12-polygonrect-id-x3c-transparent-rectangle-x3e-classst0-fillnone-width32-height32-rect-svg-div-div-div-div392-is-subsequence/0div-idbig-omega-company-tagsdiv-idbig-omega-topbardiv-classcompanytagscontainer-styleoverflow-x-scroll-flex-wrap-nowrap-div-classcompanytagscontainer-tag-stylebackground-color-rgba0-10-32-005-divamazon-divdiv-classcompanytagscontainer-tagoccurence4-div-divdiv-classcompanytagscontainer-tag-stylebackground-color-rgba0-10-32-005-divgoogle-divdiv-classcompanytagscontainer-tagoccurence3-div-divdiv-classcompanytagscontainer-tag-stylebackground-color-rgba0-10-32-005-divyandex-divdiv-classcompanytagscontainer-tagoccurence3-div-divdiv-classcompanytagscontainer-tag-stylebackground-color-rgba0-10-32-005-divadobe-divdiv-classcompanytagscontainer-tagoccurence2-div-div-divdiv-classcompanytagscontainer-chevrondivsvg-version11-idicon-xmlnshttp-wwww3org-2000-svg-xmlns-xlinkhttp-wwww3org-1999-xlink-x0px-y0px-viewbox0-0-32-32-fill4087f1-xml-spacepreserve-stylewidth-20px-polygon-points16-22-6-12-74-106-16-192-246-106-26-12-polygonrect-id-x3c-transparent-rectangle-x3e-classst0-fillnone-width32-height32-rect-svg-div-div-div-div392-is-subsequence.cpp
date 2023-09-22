class Solution {
public:
    bool isSubsequence(string s, string t)
    {
    
        
        int i=0,j=0;
        
        int n= t.size();
        
        int m =s.size();
        
        if(s=="" && t=="")
            return true;
        
        
        while(j<n)
        {
            
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            
            else
            {
                j++;
            }
            
            if(i==m)
                return true;
            
            
        }
        
        
        
        return false;
        
        
        
        
        
        
        
    }
    
};