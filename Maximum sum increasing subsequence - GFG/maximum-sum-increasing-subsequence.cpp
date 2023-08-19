//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	  int solve(int prev_idx , int idx , int nums[] , int n , vector<vector<int>> &dp)
    {
        // base case
        
        if(idx==n)
            return 0;
        
        if(dp[idx][prev_idx+1]!=-1)
            return dp[idx][prev_idx+1];
        
        
        int len = 0 + solve(prev_idx , idx + 1 , nums , n , dp);  // not take
        
        if(prev_idx==-1 || nums[idx]>nums[prev_idx])
         len = max(len , nums[idx]+ solve(idx , idx+1 , nums , n , dp));   // take 
        
        return dp[idx][prev_idx+1]=len;
        
    }


	
	
	int maxSumIS(int arr[], int n)  
	{  
	  //  int n=nums.size();
        
        vector<vector<int>> dp(n , vector<int>(n+1,-1));
        
        return solve(-1 , 0 ,arr , n , dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends