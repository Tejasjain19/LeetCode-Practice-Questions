class Solution {
public:
    
    int solve(vector<vector<int>>& grid, int i , int j , int m , int n ,  vector<vector<int>> &dp )
    {
        if(i<0 || j<0 || i>=m || j>=n)
            return 0;
        
        
        if(grid[i][j]==1)
            return dp[i][j]=0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        if(i==m-1 && j==n-1)
            return dp[i][j]=1;
        
        
        return dp[i][j]=solve(grid,i+1,j,m,n,dp)+solve(grid,i,j+1,m,n,dp);
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        
        return solve(obstacleGrid , 0 , 0 , m , n ,dp );
        
        
        
    }
};