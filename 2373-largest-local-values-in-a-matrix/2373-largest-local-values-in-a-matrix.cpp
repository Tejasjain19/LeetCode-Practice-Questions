class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        vector<vector<int>> largest;
        
       int n=grid.size();
       
        int maxElement=0;
        if(n==3)
        {   vector<int> temp;
           for (int i = 0; i < 3; i++) 
           {  
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] > maxElement) 
            {
                maxElement = grid[i][j];
            }
        }
    }
            temp.push_back(maxElement);
             largest.push_back(temp);   
            return largest;
        }
        
        
        
        else
        {
        
        
        int t=3;
        int flag=0;
        
        
        
        
       for(int i=0; i<n; i++)
       {
           
           vector<int> temp;
           
           for(int j=0; j<n; j++)
           {
               int tempv=flag;
               
               if(i+2>=n || j+2 >=n)
              
                   continue;
               
               for(int k=0; k<t; k++)
               {
                   for(int m=0; m<t; m++)
              {        
                      tempv=max(tempv,grid[k+i][m+j]); 
               }
           }
               
     
        
               temp.push_back(tempv);
       }
        
        if(temp.size()>0)
            
            largest.push_back(temp);
    
           
    }
        
        return largest;
        
    }
    }
};