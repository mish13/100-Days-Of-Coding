//Runtime: 16 ms, faster than 96.20% of C++ online submissions for Container With Most Water.
//Memory Usage: 9.9 MB, less than 59.79% of C++ online submissions for Container With Most Water.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = -1;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            int tmp = min(height[l],height[r])*(r-l);
            if(tmp>mx)
                mx = tmp;
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return mx;
    }
};
