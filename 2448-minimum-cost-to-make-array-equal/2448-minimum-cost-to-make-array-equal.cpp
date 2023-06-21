class Solution {
public: 
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        vector<pair<int,int>> v;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],cost[i]});
        }
        
        sort(begin(v),end(v));
        // to store the total cost to make all the elements before ith index...equal to nums[i] (Store the total cost to make the 0 to ith index element equal to nums[i])
        long long prefix[n]; 
        prefix[0] = 0;
        long long totCost = v[0].second;
 
        for(int i=1;i<n;i++)
        {
            prefix[i] = prefix[i-1] + abs(v[i].first - v[i-1].first)*totCost;
            totCost += v[i].second;
        }
        
        // to store the total cost to make all the element after ith index....equal to nums[i] (Store the total cost to make the n-1 to ith index element equal to nums[i])
        long long sufix[n];
        totCost = v[n-1].second;
        sufix[n-1] = 0;
        for(int i= n-2;i>=0;i--)
        {
            sufix[i] = sufix[i+1] + abs(v[i].first - v[i+1].first)*totCost;
            totCost += v[i].second;
        }
        
        long long ans = LLONG_MAX;
        // atlast...NOW (sufix + prefix) will give you the total cost to make all the elements equal to nums[i]
        // so take the minimum of all
        for(int i=0;i<n;i++)
        {
            ans = min(ans, prefix[i]+sufix[i]);
        }
        return ans;
    }
};