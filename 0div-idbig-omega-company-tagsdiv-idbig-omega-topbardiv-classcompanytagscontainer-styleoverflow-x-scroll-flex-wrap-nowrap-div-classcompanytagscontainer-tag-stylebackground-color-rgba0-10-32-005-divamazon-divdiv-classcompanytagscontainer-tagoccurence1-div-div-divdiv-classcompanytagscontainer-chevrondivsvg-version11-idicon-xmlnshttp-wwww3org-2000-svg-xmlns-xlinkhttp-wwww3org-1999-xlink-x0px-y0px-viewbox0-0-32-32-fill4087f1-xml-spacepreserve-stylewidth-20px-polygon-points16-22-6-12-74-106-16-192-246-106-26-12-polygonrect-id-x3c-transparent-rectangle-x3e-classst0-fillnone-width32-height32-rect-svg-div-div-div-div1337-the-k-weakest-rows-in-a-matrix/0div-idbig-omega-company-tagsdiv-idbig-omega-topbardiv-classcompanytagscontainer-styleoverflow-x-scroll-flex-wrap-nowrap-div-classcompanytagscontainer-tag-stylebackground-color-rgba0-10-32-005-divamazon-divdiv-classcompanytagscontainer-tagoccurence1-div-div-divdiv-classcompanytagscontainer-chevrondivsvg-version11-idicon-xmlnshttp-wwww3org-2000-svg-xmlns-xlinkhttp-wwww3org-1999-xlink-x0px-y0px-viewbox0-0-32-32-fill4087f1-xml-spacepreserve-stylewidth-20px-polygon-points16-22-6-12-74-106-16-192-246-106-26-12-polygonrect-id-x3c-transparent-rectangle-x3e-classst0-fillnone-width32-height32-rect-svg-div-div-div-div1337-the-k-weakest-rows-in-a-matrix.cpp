class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> res;
        
        vector<pair<int,int>> vp;
        
        
        
        for(int i=0; i<m; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(mat[i][j]==1)
                    cnt++;
            }
            
            vp.push_back(make_pair(cnt,i));
        }
        
        
        sort(vp.begin(),vp.end());
        
        
        for(int i=0 ; i<k; i++)
        {
            
            res.push_back(vp[i].second);
            
        }
        
        
        
        return res;
        
        
        
        
        
    }
};