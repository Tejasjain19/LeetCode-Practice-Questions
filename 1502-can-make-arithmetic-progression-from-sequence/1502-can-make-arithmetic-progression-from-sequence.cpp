class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        set<int> s;
        
        
        for(int i=1; i<n; i++)
        {  
            int diff = arr[i]-arr[i-1];
            s.insert(diff);
        }
        
        if(s.size()==1)
            return true;
        
        
        return false;
        
        
    }
};