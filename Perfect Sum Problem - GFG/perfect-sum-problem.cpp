//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
    int m=1e9+7;
    int solve(int arr[],int n,int s,int ind,  vector<vector<int>>& dp){
        
        if(ind==n){
            if(s==0){
                return 1;
            }
            return 0;
        }
        if(dp[ind][s]!=-1) return dp[ind][s];
        int pick=0;
        
        if(s >=arr[ind]){
         pick=solve(arr,n,s-arr[ind],ind+1,dp);
        }
        int notpick=solve(arr,n,s,ind+1,dp);
        
        return dp[ind][s]=(notpick+pick)%m;
    }
    int perfectSum(int arr[], int n, int sum)
    {
        // Your code goes here
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
       return  solve(arr,n,sum,0,dp);
    }
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends