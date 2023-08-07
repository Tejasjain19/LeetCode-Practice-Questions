class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m = matrix[0].size();
        int n = matrix.size();
        
        int l=0,h=m*n-1;
        
        while(l<=h)
        {
            int mid = (l+h)/2;
            
            if(matrix[mid/m][mid%m]==target)
                return true;
            
            else if(matrix[mid/m][mid%m]<target)
                l = mid+1;
            
            else 
                h=mid-1;
         
            
            
        }
        
        
        
      return false;  
        
        
    }
};