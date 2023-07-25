class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
    
        int peak = arr[0],idx=0;
        
        for(int i=1; i<arr.size(); i++)
        {
            
            if(arr[i]>peak)
            {
                peak = arr[i];
                idx=i;
            }
            
            
            
        }
        
        
        
        
        
       return idx;  
        
        
        
    }
};