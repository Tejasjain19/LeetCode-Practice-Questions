class Solution {
    int row, col;
    const int d[5]={0,1, 0, -1, 0};
    int gold=0;
    void f(int i, int j, int sum,  vector<vector<int>>& grid){
        int tmp=grid[i][j];
        sum+=tmp;
        gold=max(gold, sum);
        grid[i][j]=0;
        for (int a=0; a<4; a++){
            int r=i+d[a], c=j+d[a+1];
            if (r<0 ||r>=row|| c<0 || c>=col||grid[r][c]==0) continue;
            f(r, c, sum, grid);
        }
        grid[i][j]=tmp;//backtracking
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        row=grid.size(), col=grid[0].size();
        vector<pair<int, int>> degLeq2;
        
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++){
                if (grid[i][j]!=0){
                    int deg=0;
                    for (int a=0; a<4; a++){
                        int r=i+d[a], c=j+d[a+1];
                        if (r<0 ||r>=row|| c<0 || c>=col||grid[r][c]==0) continue;
                        deg++;
                    }
                    if (deg<3) degLeq2.emplace_back(i, j);
                }
            }
        
        for(auto& [i, j]: degLeq2){
            if (grid[i][j]!=0)
                f(i, j, 0, grid);
        }
        return gold;
    }
};