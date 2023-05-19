class Solution {
public:
       bool check(int start , int V ,vector<vector<int>> adj , int color[])
   {
       queue<int> q;
       q.push(start);
       color[start]=0;
       
       while(!q.empty())
       {
       
       int prevcol = q.front();
       q.pop();
       
       for(auto it : adj[prevcol])
       {
          if(color[it]==-1)
          {
          color[it] = !color[prevcol];
          q.push(it);
          }
          
         else if(color[it]==color[prevcol])
          return false;
          
          
       }
       
       
       }
       
       return true;
   }


    
    
    
    
    
    bool isBipartite(vector<vector<int>>& adj)
    {
        
        int V = adj.size();
        
         int color[V];
         
	    
	    for(int i=0; i<V; i++)
	    {
	        color[i]=-1;
	    }
	    
	    for(int i=0; i<V; i++)
	    {    if(color[i]==-1)
	        {
	        if(check(i ,V, adj , color )==false)
	        return false;
	        }
	    }
	    
	    return true;
	}

};