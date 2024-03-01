class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
    
        int n=s.size(),cnt=0;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        
        int temp = n-cnt;
        
        
        string ans="";
        
        while(cnt>1)
        {
            ans+='1';
            cnt--;
        }
        
        
        while(temp>0)
        {
            ans+='0';
            temp--;
        }        
        
        ans+='1';
        
        return ans;
        
    }
};