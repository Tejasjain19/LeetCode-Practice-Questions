class Solution {
public:
    string largestGoodInteger(string num) 
    {
    
        
       int n = num.size(),ans=INT_MIN;
        
        vector<string> st;
        
        
       for(int i=0; i<n-2; i++)
       {
           string t="";
           
           
        if(num[i]==num[i+1] && num[i+1]==num[i+2])
        {
            t+=num[i];
           t+=num[i+1];
            t+=num[i+2];
                   
           int temp = stoi(t);
            ans=max(ans , temp);
                   
          }   
               
                    
           }
           
           
          
        
        if(ans==INT_MIN)
            return "";
        
        if(ans==000)
        {
            return "000";
            
        }
        string mn = to_string(ans);
        
        
        return mn;
        
        
        
    }
};