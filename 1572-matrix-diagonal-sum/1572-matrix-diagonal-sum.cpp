class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int m=mat.size();
        int n = mat[0].size();
        
        
        for(int i=0; i<m; i++)
        {
           for(int j=0; j<n; j++)
        {
            if(i==j)
                sum+=mat[i][j];
              if ((i + j) == (n - 1))
                  sum+=mat[i][j];
        }  
        }
        
        if(n%2==1)
            return sum-mat[n/2][m/2];
        
        return sum;
    }
};