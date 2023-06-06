class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        set<int> s;
        
        
        for(int i=0; i<n-1; i++)
        {   int diff;
            diff = arr[i+1]-arr[i];
            s.insert(diff);
        }
        
        if(s.size()==1)
            return true;
        
        
        return false;
        
        
    }
};