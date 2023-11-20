class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel)
    {
    
        int lastm=0,lastp=0,lastg=0,cnt=0;   // only finding last index is enough
     
        for(int i=0; i<garbage.size(); i++)
        {
            for(auto it:garbage[i])
            {
                if(it=='M')
                    lastm=i;
                if(it=='P')
                    lastp=i;
                if(it=='G')
                    lastg=i;
                cnt++;
            }
        }
          
        int tot=cnt;
        
          int sum=0;
        for(int i=0; i<travel.size(); i++)
        {
            sum += travel[i];
            if(lastg==i+1) 
                tot += sum;
            if(lastp==i+1) 
                tot += sum;
            if(lastm==i+1) 
                tot += sum;   
        }
        
        return tot;
        
        
        
        
        
        
        
        
    }
};