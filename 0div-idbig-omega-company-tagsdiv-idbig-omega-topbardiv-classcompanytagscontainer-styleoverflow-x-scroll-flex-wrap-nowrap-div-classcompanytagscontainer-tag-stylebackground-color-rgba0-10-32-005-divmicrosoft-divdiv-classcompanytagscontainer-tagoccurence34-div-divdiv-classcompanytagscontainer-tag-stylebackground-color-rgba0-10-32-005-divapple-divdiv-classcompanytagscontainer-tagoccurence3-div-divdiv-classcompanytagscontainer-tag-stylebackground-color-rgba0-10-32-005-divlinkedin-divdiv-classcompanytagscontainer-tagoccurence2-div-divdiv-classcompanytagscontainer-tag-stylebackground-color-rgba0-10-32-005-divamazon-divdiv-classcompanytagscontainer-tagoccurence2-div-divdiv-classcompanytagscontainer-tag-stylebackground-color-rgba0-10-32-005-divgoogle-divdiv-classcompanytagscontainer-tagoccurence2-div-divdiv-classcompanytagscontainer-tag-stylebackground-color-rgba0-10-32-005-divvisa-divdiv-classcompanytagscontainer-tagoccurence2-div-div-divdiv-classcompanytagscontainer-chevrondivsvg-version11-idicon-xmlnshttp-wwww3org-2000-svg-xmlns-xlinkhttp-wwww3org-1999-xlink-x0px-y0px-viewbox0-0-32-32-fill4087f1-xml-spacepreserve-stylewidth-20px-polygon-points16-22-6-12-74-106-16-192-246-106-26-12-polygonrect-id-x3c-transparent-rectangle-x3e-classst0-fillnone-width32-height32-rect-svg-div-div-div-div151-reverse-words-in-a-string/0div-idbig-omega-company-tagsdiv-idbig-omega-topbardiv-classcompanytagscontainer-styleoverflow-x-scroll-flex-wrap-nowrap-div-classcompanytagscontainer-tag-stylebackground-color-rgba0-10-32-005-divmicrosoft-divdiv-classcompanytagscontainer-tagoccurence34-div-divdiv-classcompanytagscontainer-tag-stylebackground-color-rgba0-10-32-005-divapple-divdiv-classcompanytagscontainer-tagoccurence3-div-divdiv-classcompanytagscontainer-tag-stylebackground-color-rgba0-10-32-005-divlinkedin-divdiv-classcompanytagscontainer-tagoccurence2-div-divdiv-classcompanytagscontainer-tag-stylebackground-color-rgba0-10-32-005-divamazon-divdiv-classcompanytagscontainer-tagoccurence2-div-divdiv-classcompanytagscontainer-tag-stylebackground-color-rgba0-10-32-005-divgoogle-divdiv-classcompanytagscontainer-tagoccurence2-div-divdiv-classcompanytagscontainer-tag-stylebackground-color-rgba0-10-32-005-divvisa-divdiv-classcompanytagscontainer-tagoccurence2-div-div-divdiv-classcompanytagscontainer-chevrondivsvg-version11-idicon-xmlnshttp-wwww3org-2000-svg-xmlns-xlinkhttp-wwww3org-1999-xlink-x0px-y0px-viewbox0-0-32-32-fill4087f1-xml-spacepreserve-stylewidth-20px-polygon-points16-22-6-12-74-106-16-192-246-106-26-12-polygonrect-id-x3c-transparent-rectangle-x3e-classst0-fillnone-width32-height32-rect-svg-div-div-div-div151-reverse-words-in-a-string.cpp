class Solution {
public:
    string reverseWords(string s) 
    {
     
        int n=s.size();
        
        stack<string> st;
        
        string ans;
        
        for(int i=0; i<n; i++)
        {
            
            string word ="";
            
            if(s[i]==' ')
                continue;
            
            
            while(s[i]!=' ' && i<n)
            {
                word+=s[i];
                i++;
            }
            
            st.push(word);
            
            
        }
        
        
        
        while(st.size()>1)
        {
            ans+=st.top();
            st.pop();
             ans+=' ';
        }
        
        ans+=st.top();
        
        
        return ans;
        
        
        
    }
};