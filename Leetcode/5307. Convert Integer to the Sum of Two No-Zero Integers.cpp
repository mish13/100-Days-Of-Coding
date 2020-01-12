class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for(int i=1;i<=n-1;i++)
        {
            int tmp1=i,tmp2=n-i;
            int flag1=0,flag2=0;
            while(tmp1!=0)
            {
                if(tmp1%10==0)
                {
                    flag1=1;
                    break;
                }
                tmp1/=10;
            }
            while(tmp2!=0)
            {
                if(tmp2%10==0)
                {
                    flag2=1;
                    break;
                }
                tmp2/=10;
            }
            if(flag1==0 && flag2==0)
            {
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
        }
        return ans;
    }
};
