class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
       // BFS + Bitmasking Best

        int n = graph.size();
       
        if(n==1) return 0;

        int finalMask = (1<<n) -1;
     
        vector<vector<bool>> visited(n, vector<bool>(finalMask, false));

        int shortestPath = 0;

        queue<pair<int, int>> q;
        
        for(int i = 0;i<n;i++){
            q.push({i,1<<i});
        }

        while(!q.empty()){
            shortestPath++;
            int l = q.size();
            while(l--){
                auto it = q.front();
                q.pop();
                int currState = it.first;
                int currMask = it.second;

                for(auto &adjNode: graph[currState]){
                    int nextMask = currMask | 1<< adjNode;
                    if(nextMask == finalMask) 
                        return shortestPath;
                    if(!visited[adjNode][nextMask]){
                        
                        visited[adjNode][nextMask] = true;
                        q.push({adjNode, nextMask});
                    }
                }
            }
        }

    return 0;

    }
};