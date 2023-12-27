class Solution {
public:
    int minCost(string c, vector<int>& neededTime)
    {
        
        int n= c.size(),sum=0;
        
        
        
        for(int i=1; i<n; i++)
        {
            if(c[i-1]!=c[i])
            {
                continue;
            }
            else if(c[i-1]==c[i])
            {
                sum+=min(neededTime[i-1],neededTime[i]);
                neededTime[i]=max(neededTime[i-1],neededTime[i]);
            }
        }
        
        
        
        
        
        return sum;
        
        
    }
};