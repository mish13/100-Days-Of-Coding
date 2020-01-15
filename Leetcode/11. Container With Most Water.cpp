//Runtime: 1288 ms, faster than 7.17% of C++ online submissions for Container With Most Water.
//Memory Usage: 9.8 MB, less than 68.04% of C++ online submissions for Container With Most Water.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = -1;
        for(int i=0;i<height.size()-1;i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                int tmp = min(height[i],height[j])*(j-i);
                if(tmp>mx)
                    mx = tmp;
            }
        }
        return mx;
    }
};
