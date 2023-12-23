class Solution {
public:
    bool isPathCrossing(string path) {
        
        
       set<pair<int,int>> st;
        
        
        int x=0,y=0;
        
        st.insert({0,0});
        
        for(auto it : path)
        {
            if(it=='N')
            y++;
            
            else if(it=='S')
            y--;
            
            else if(it=='E')
            x++;
            
            else
            x--;
            
            
          if(st.find({x,y})!=st.end())
          {
              return true;
          }
            
            else
            {
                st.insert({x,y});
            }
            
            
        }
        
        
        
        
        return false;
        
        
        
        
        
        
        
    }
};