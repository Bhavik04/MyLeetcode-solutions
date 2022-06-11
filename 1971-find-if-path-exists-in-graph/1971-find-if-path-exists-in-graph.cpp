class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        
        vector<int> vis(n+1,0);
        for(auto &x: edges){
            adj[x[0]].push_back(x[1]);
            
            adj[x[1]].push_back(x[0]);
        }
        
        queue<int> q;
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination) return true;
            for(auto &x: adj[node]){
                if(!vis[x]){
                    q.push(x);
                    vis[x]=1;
                }
            }
        }
        return false;
    }
};