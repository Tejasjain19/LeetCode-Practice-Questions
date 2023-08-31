class Solution {
public:
    int minTaps(int n, vector<int>& ranges) 
    {
        int minm=0,maxm=0,open=0;
        
        while(maxm<n)
        {
            
            for(int i=0; i<ranges.size(); i++)
            {
                
                if(i-ranges[i]<=minm && i+ranges[i]>maxm)
                {
                    maxm=i+ranges[i];
                }
                
            }
                    
                if(minm==maxm)
                    return -1;
                
                open++;
                minm=maxm;
            
            }
                  
        
        return open;
   
    }
};