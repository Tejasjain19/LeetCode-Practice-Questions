class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target)
    {
    
        int n=hours.size(),cnt=0;
        
        for(auto it : hours)
        {
            if(it>=target)
                cnt++;
            
            
        }
        
        
        return cnt;
    }
};