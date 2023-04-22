class Solution {
public:
    
    
    	int dp[1001][1001];
		
		int lcs(string &x , string &y , int m , int n)
		{
		    if(m==0 || n==0 )
		    return 0;
		    
		    if(dp[m][n]!=-1)
		    return dp[m][n];
		    
		    
		    if(x[m-1]==y[n-1])
		    {
		        return dp[m][n]=1+lcs(x,y,m-1,n-1);
		    }
		    
		    else
		    {
		        return dp[m][n]=max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
		    }
		    
		    
		}
    
    
    
    int minInsertions(string s) 
    {
        
         string s1=s;
        int n=s.size();
        
    reverse(s1.begin(),s1.end());
    
    memset(dp,-1,sizeof(dp));
    
    int ans= lcs(s,s1, n , n);
    
    
    return n-ans;
    
        
        
        
        
    }
};