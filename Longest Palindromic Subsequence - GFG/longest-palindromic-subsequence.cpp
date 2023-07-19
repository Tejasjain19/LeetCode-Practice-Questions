//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    
    	int dp[1001][1001];
    int lcs(string &A , string &temp , int m , int n  )
    {
        if(m==0 || n==0)
        return 0;
        
        if(dp[m][n]!=-1)
        return dp[m][n];
        
        
        if(A[m-1]==temp[n-1])
        return dp[m][n]=1+lcs(A,temp,m-1,n-1);
        
        
        return dp[m][n]=max(lcs(A,temp,m-1,n),lcs(A,temp,m,n-1));
        
        
    }
    
    
    
    
    
    int longestPalinSubseq(string A) {
        
    string temp=A;
     reverse(temp.begin(),temp.end());
    int n=A.size();
    
   memset(dp,-1,sizeof(dp));
    
    return lcs(A , temp , n , n );
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends