class Solution {
public:
    
    bool dfs(int source, int destination, vector<int> adj[], vector<int>& vis){
            if(source==destination)return true;
            //if(vis[source])return false;
            vis[source]=1;
            
            for(auto &x: adj[source]){
                if(!vis[x]){
                    //if(x==destination)return true;
                    
                    if(dfs(x,destination,adj,vis))return true;
                }
            }
           
        
        return false;
    }
    
    bool bfs(int source, int destination, vector<int> adj[], vector<int> vis){
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
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        
        vector<int> vis(n+1,0);
        for(auto &x: edges){
            adj[x[0]].push_back(x[1]);
            
            adj[x[1]].push_back(x[0]);
        }
        
        bool ans=dfs(source,destination,adj,vis);
        
        
        return ans;
    }
};