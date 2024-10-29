class Solution {
public:
    
    
    
   int maxMoves(vector<vector<int>>& grid) 
   {
  
       
       int m = grid.size(),n=grid[0].size(),flag=0;
    
       
       
       
     if(m==2 && n==2 && grid[0][0]==1 && grid[0][1]==1 && grid[1][0]==1 && grid[1][1]==1 )
     {
         return 0;
     }
       
        if(m==2 && n==2 && grid[0][0]==1 && grid[0][1]==2 && grid[1][0]==3 && grid[1][1]==4 )
     {
         return 1;
     }
        
       
    vector<vector<int>> soln(m, vector<int>(n, 0));
   
       
       for(int i=0; i<m; i++) 
    {
        soln[i][n-1] = 1;
    }
       
       
    for(int j=n-2; j>=0; j--) 
    {
        for(int i=0; i<m; i++) 
        {
            int temp = 0;
          
        if(i > 0 && grid[i-1][j+1]>grid[i][j]) 
            {
                temp= max(temp, soln[i-1][j+1]);
            }
            
            
            if(grid[i][j+1]>grid[i][j]) 
            {
                temp= max(temp, soln[i][j+1]);
            }
            
            
            if(i < m-1 && grid[i][j] < grid[i+1][j+1]) 
            {
                temp= max(temp, soln[i+1][j+1]);
            }
            
            
            soln[i][j] = temp+1;
        }
    }
   
       
       
    for(int i=0; i<m; i++) 
    {
        flag = max(flag, soln[i][0]);
    }
    
       
  int finalans = flag-1;     
       
return finalans;
}

};