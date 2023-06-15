class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
    
        int n = s.size();
        
        int i=0,j=0,mx=INT_MIN;
        
        unordered_set<char> st;
        
        
        if(n==0)
            return 0;
        
        
        while(j<n)
        {
            while(st.find(s[j])!=st.end())
            {
                st.erase(s[i]);
                i++;
            }
            
            
            mx=max(mx,j-i+1);
            
            st.insert(s[j]);
            
            j++;
            
            
            
        }
        
        
        
        return mx;
        
        
        
        
        
        
        
        
    }
};