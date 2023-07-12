class Solution {
public:
   
      bool dfschk(int node , vector<vector<int>> &graph , int vis[] , int pathvis[] , int check[])
   {
       vis[node]=1;
       pathvis[node]=1;
       check[node]=0;
       
       for(auto it : graph[node])
       {
           if(!vis[it])
           {
               if(dfschk(it , graph , vis , pathvis , check)==true)
               {
            //   check[node]=0;
               return true;
               }
           }
               
               else if(pathvis[it])
               {
                  // check[node]=0;
               return true;
               }
           
           
           
       }
       check[node]=1;
       
       pathvis[node]=0;
       
       return false;
       
   }   
   
    
    
    
    
    
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph)
    {  
        int V=graph.size();
        int vis[V];
        for(int i=0; i<V; i++)
        {
            vis[i]=0;
        }
         
          int pathvis[V];
        for(int i=0; i<V; i++)
        {
            pathvis[i]=0;
        }
        
          int check[V];
        for(int i=0; i<V; i++)
        {
            check[i]=0;
        }
        
        
       vector<int> safenodes;
       
       for(int i=0; i<V; i++)
       {
           if(!vis[i])
           {
               dfschk(i , graph , vis , pathvis , check);
             
           }
       }
       
       for(int i=0; i<V; i++)
       {
           if(check[i]==1)
           safenodes.push_back(i);
       }
       
       
       return safenodes;
        
    }
};