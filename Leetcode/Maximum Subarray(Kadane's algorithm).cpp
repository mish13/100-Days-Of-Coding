//Runtime: 8 ms, faster than 70.85% of C++ online submissions for Maximum Subarray.
//Memory Usage: 9.3 MB, less than 66.67% of C++ online submissions for Maximum Subarray.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global_max = 0, current_max = 0, mx = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mx)
                mx=nums[i];
            current_max+=nums[i];
            if(current_max<0)
                current_max=0;
            if(current_max>global_max)
                global_max=current_max;
        }
        if(global_max==0)
        {
            global_max=mx;
        }
        return global_max;
        
    }
};
