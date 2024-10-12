class Solution {
public:
    int minGroups(vector<vector<int>>& intervals)
    {     int n=intervals.size();
        if(n==1)
        {
            return 1;
        }
        
        priority_queue<int,vector<int>,greater<int>> temp;
        
        sort(intervals.begin(),intervals.end());
        
        int flag=0;
        
        
        
        for(auto it : intervals)
        {
            if(temp.size()==0 || temp.top()>it[0])
            {
                flag++;
            }
            
            else
            {
                temp.pop();
            }
            
            temp.push(it[1]+1);
        }
        
        
        
        
        return flag;
        
        
        
        
    }
};