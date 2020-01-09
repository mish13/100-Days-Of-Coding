class Solution {
public:
    int vis[107],dis[107];
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        queue <int> q;
        q.push(id);
        memset(vis,0,sizeof(vis));
        vis[id]=1;
        dis[id]=0;
        vector < pair <int,string> > ans;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int i=0;i<friends[u].size();i++)
            {
                int v=friends[u][i];
                if(vis[v]==0)
                {
                    vis[v]=1;
                    dis[v]=dis[u]+1;
                    q.push(v);
                    if(dis[v]==level)
                    {
                        for(int j=0;j<watchedVideos[v].size();j++)
                        {
                            string vid = watchedVideos[v][j];
                            int flag = 0;
                            for(int k=0;k<ans.size();k++)
                            {
                                if(ans[k].second==vid)
                                {
                                    ans[k].first++;
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==0)
                            {
                                ans.push_back({1,vid});
                            }
                        }
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        vector <string> vt;
        for(int i=0;i<ans.size();i++)
            vt.push_back(ans[i].second);
        return vt;
    }
};
