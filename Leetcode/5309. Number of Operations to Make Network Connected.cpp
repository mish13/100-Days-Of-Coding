class Solution {
public:
    vector <int > adj[100007];
    int node,edge=0,component=0;
    int vis[100007];
    void dfs(int u)
    {
        vis[u]=1;
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                dfs(v);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        for(int i=0;i<connections.size();i++)
        {
            int u=connections[i][0],v=connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            edge++;
        }
        memset(vis,0,sizeof(vis));
        node = n;
        if(node>edge+1)
            return -1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                component++;
                dfs(i);
            }
        }
        //cout<<component<<endl;
        return component-1;
    }
};
