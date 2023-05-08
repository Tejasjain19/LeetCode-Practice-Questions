class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.size();
        stack<string> st;
        
        string soln;
        
        for(int i=0; i<n; i++)
        {
            
            string temp;
            
            if(s[i]==' ')
                continue;
            
            while(i<n && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            
            st.push(temp);
        }
        
        
        while(st.size()>1)
        {
            soln+=st.top();
            st.pop();
            soln+=' ';
        }
        
        soln+=st.top();
        
        return soln;
        
        
    }
};