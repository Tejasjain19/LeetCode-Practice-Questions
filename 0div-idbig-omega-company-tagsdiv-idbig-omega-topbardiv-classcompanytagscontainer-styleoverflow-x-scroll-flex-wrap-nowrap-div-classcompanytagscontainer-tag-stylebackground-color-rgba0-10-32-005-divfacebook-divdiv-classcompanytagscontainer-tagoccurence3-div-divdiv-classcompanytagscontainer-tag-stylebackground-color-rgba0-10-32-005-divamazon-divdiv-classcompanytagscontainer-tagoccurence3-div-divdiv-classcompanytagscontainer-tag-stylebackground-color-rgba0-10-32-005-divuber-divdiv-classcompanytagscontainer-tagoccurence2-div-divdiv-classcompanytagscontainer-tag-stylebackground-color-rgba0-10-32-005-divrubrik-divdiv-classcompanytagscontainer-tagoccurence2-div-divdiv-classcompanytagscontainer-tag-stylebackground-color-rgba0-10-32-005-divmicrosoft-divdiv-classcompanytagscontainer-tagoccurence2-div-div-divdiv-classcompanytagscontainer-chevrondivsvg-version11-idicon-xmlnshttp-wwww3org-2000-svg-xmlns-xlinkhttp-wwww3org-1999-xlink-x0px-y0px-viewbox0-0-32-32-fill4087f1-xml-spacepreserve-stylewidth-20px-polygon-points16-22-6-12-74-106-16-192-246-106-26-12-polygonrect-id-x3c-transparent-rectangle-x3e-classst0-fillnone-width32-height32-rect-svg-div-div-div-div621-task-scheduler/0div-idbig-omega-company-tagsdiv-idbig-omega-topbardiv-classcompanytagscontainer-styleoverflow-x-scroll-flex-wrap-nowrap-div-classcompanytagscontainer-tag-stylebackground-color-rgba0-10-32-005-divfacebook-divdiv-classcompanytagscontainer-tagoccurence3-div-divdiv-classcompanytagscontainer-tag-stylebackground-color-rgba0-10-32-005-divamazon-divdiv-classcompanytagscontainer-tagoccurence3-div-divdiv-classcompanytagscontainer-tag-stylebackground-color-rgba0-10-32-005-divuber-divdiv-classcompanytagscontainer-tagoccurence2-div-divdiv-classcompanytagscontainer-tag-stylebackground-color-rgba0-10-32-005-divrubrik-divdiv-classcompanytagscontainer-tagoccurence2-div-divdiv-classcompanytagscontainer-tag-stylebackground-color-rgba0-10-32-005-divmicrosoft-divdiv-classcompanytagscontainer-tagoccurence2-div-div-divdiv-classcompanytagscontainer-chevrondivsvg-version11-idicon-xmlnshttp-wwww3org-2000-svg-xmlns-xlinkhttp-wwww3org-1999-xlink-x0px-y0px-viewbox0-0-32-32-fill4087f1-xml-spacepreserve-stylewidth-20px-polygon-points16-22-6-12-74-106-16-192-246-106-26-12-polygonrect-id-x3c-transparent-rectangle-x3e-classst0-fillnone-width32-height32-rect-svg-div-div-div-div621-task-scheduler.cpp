class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        unordered_map<char,int> mp;
        
        int ans =0;
        
        
        for(auto it : tasks)
        {
            mp[it]++;
            
        }
        
        
        priority_queue<int> pq;
        
        for(auto it : mp)
        {
            pq.push(it.second);
        }
        
        
        
        while(!pq.empty())
        {
            
           vector<int> tmp;
            
            int time =0;
            
            for(int i=0; i<n+1; i++)
            {
                if(!pq.empty())
                {
                tmp.push_back(pq.top()-1);
                
                pq.pop();
                
                time++;
                }
                
            }
            
           for(auto t : tmp)
            {
               if(t)
                pq.push(t);
               
            }
            
            if(pq.empty())
            {
               ans+=time; 
            }
            
            else
            {
                ans+=n+1;
            }
            
            
            
            
            
            
        }
        
        
        
    return ans;   
        
        
        
    }
};