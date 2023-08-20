//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
   int Count(vector<vector<int> >& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }
        int count_one = 0;
        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            int count_zero = 0;
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    int nrow = r + delrow;
                    int ncol = c + delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && matrix[nrow][ncol]==0)
                    {
                        count_zero++;
                    }
                }
            }
            if((count_zero>0)&&(count_zero%2==0))
            {
                count_one++;
            }
        }
        return count_one;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends