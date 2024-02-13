class Solution {
public:
    

    
    
    string firstPalindrome(vector<string>& words) {
        
        int n = words.size();
        
        string ans="";
        
       
        
        
        for(auto it : words)
        {
           string temp = it;
            
            reverse(temp.begin(),temp.end());
            
            if(temp==it)
            {
                return it;
            }
        }
        
        
        
        
        
        
       return ans;  
        
        
    }
};