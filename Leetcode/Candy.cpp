// Runtime: 28 ms, faster than 67.76% of C++ online submissions for Candy.
// Memory Usage: 10.3 MB, less than 84.62% of C++ online submissions for Candy.

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = int(ratings.size());
        int left2right[n],right2left[n];
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                if(ratings[i-1]<ratings[i])
                {
                    left2right[i]=left2right[i-1]+1;
                }
                else
                    left2right[i]=1;
            }
            else
                left2right[i]=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i!=n-1)
            {
                if(ratings[i+1]<ratings[i])
                {
                    right2left[i]=right2left[i+1]+1;
                }
                else
                    right2left[i]=1;
            }
            else
                right2left[i]=1;
        }
        int ans =0;
        for(int i=0;i<n;i++)
        {
            ans+=max(left2right[i],right2left[i]);
        }
        return ans;
    }
};
