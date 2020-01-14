//Runtime: 220 ms, faster than 86.52% of C++ online submissions for K Closest Points to Origin.
//Memory Usage: 47.8 MB, less than 48.44% of C++ online submissions for K Closest Points to Origin.

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        vector < pair <double, pair <double, double> > > vt;
        for(int i=0;i<points.size();i++)
        {
            double x = points[i][0], y = points[i][1];
            double dis = sqrt(x*x+y*y);
            vt.push_back({dis,{x,y}});
        }
        sort(vt.begin(),vt.end());
        vector <vector<int> > ans;
        for(int i=0;i<K;i++)
        {
            int x = vt[i].second.first;
            int y = vt[i].second.second;
            ans.push_back({x,y});
        }
        return ans;
        
    }
};
