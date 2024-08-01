class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        
        int n = details.size(),cnt=0;
        
        
        for(int i=0; i<n; i++)
        {
            
                
                int age1 = details[i][11]-'0';
                int age2 = details[i][12]-'0';
                
                
                int age3 = age1*10 + age2;
                
                
                if(age3>60)
                {
                    cnt++;
                }
                
                
            }
            

        
        
        
        return cnt;
        
        
        
        
        
    }
};