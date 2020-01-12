class Solution {
public:
    int minFlips(int a, int b, int c) {
        string A="",B="",C="";
        while(c!=0)
        {
            C = C+ char(c%2+'0');
            c/=2;
        }
        while(a!=0)
        {
            A = A+ char(a%2+'0');
            a/=2;
        }
        while(b!=0)
        {
            B = B+ char(b%2+'0');
            b/=2;
        }
        int mx = max(A.size(),max(B.size(),C.size()));
        while(C.size()<mx)
        {
            C = C + '0';
        }
        while(A.size()<mx)
        {
            A = A + '0';
        }
        while(B.size()<mx)
        {
            B= B + '0';
        }
        reverse(B.begin(),B.end());
        reverse(C.begin(),C.end());
        reverse(A.begin(),A.end());
        int ans=0;
        for(int i=0;i<C.size();i++)
        {
            if(C[i]=='0')
            {
                if(A[i]=='1')
                    ans++;
                if(B[i]=='1')
                    ans++;
            }
            else
            {
                if(A[i]=='0' && B[i]=='0')
                    ans++;
            }
        }
        return ans;
    }
};
