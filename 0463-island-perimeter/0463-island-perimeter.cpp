class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++) 
            for(int j=0;j<grid[0].size();j++)
            {
            if(grid[i][j])
            { 
                int temp = 4; 
                if((i+1<grid.size() && grid[i+1][j])) 
                    temp--;
                
                if(j+1<grid[0].size() && grid[i][j+1])
                    temp--;
                
                if(i-1>=0 && grid[i-1][j]) 
                    temp--; 
                
                if(j-1>=0 && grid[i][j-1]) 
                    temp--; 
                res+=temp;
            }
        }
        return res;
    }
};