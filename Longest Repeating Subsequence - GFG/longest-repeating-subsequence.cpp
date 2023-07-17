//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int dp[1001][1001];
    
   int lcs(string &x , string &y , int n , int m )
    {   
    
     
     
      int dp[n+1][m+1];
       
         for(int i=0 ; i<n+1; i++)
         {
            for(int j=0 ; j<m+1; j++)
         {
             
             if(i==0)
             dp[i][j]=0;
             
             if(j==0)
             dp[i][j]=0;
             
         }
            
             
         }
         
          for(int i=1 ; i<n+1; i++)
         {
            for(int j=1 ; j<m+1; j++)
         {
             
             
        if(x[i-1]==y[j-1] && i!=j)
            
         dp[i][j]=1+dp[i-1][j-1];
            
        
        else
        
        
       dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        
        
         }
         
         
         }
    
          
          return dp[n][m];
             
         }
         
 

	

	
	
	
	
		int LongestRepeatingSubsequence(string str)
		{
		    int s=str.size();
		    
		    return lcs(str,str,s,s);
		    
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends