class Solution {
public:
    bool isValid(string s) {
        
        
        int n=s.size(),i=0;
        
        stack<char> st;
        
        
       for(int i=0; i<n; i++)
        {
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
             
            }
            
            else
            {
                
            if(st.empty())
            {
                return false;
            }
            
                char x = st.top();
                st.pop();
                
                if(s[i]==')' && x=='(' || s[i]==']' && x=='[' || s[i]=='}' && x=='{')
                continue;
                
                else
                    return false;
            }
            
            
            
            
        }
        
        
        
        if(st.empty())
            return true;
        
        return false;
        
        
        
        
        
        
        
        
    }
};