class Solution {
public:
    void dfs(vector <int> adj[],int arr[],int vis[],int u)
    {
        vis[u]=1;
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];
            arr[v]=max(arr[v],arr[u]+1);
            dfs(adj,arr,vis,v);
        }
    }
    
    int candy(vector<int>& ratings) {
        int n = int(ratings.size());
        int arr[n],vis[n];
        priority_queue < pair<int,int>, vector< pair<int,int> >, greater < pair<int,int> > > pq;
        pair <int,int> pr;
        vector <int> adj[n];
        memset(arr,0,sizeof(arr));
        memset(vis,0,sizeof(vis));
        for(int i=0;i<ratings.size();i++)
        {
            pq.push({ratings[i],i});
        }
        for(int i = 0; i<n ; i++)
        {
            if(i>0)
            {
                if(i<n-1)
                {
                    if(ratings[i]<ratings[i-1])
                    {
                        adj[i].push_back(i-1);
                    }
                    if(ratings[i]<ratings[i+1])
                    {
                        adj[i].push_back(i+1);
                    }
                }
                else if(i==n-1)
                {
                    if(ratings[i]<ratings[i-1])
                    {
                        adj[i].push_back(i-1);
                    }
                }
            }
            else if(i==0)
            {
                if(i<n-1)
                {
                    if(ratings[i]<ratings[i+1])
                    {
                        adj[i].push_back(i+1);
                    }
                }
            }
        }
        while(!pq.empty())
        {
            pr = pq.top();
            pq.pop();
            if(vis[pr.second]==0)
            {
                arr[pr.second]=1;
                vis[pr.second]=1;
                dfs(adj,arr,vis,pr.second);
            }
            else
                continue;
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
            //cout<<arr[i]<<endl;
        }
        return ans;
    }
};
