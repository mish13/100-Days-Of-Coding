class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        long long pre_xor [arr.size()],suff_xor[arr.size()];
        vector <int> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(i==0)
                pre_xor[i]=arr[i];
            else
                pre_xor[i]=pre_xor[i-1]^arr[i];
        }
        for(int i=arr.size()-1,j=0;i>=0;i--,j++)
        {
            if(j==0)
                suff_xor[i]=arr[i];
            else
                suff_xor[i]=suff_xor[i+1]^arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            cout<<pre_xor[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<arr.size();i++)
        {
            cout<<suff_xor[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            int res = 0;
            res^=pre_xor[r];
            if(l>0)
                res^=pre_xor[l-1];
            ans.push_back(res);
        }
        return ans;
    }
};
