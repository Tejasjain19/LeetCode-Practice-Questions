class Solution {
public:
    // greedy
    
    
      static bool compare(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
        
    }
    
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
    
        int n=intervals.size(),cnt=0;
        
        sort(intervals.begin(),intervals.end(),compare);
        
        
        int j=0;
        
        for(int i=1; i<n; i++)
        {
          
            if(intervals[j][1]>intervals[i][0])
            {
                cnt++;
            }
            
            else
            {
               j=i;
            }
            
            
        }
        
        
        
        return cnt;
        
        
        
      //  The code follows a greedy approach, where at each step, it makes the locally optimal choice to maximize the number of non-overlapping intervals. By sorting the intervals based on their end points and iterating through them, the code effectively identifies overlaps and counts them. The result is the minimum number of intervals that need to be removed to eliminate all overlaps.
        
        
        
        
    }
};