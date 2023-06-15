class Solution {
public:
    int maxArea(vector<int>& height) 
    {
    
        // 2 pointer approach
        
        int n = height.size();
        
        int l=0,h=n-1,mx=INT_MIN;
        
        while(l<h)
        {
            int lh = height[l];
            int rh = height[h];
            
            int minheight = min(lh,rh);
            int ans = (h-l)*minheight ;
            mx=max(mx , ans);
            
            if(lh>rh)
                h--;
            else
                l++;
        }
        
        
        
        return mx;
        
        
        
        
        
        
        
        
        
        
    }
};