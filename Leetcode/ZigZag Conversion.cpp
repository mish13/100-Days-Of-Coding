class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        int dir=0,pos=0;
        string ans[numRows];
        for(int i=0;i<numRows;i++)
            ans[i]="";
        for(int i=0;i<s.size();i++)
        {
            if(dir==0)
            {
                ans[pos] = ans[pos]+ s[i];
                pos++;
                if(pos==numRows)
                {
                    pos-=2;
                    dir=1;
                }
            }
            else
            {
                ans[pos] = ans[pos]+s[i];
                pos--;
                if(pos==-1)
                {
                    pos+=2;
                    dir=0;
                }
            }
        }
        string out="";
        for(int i=0;i<numRows;i++)
        {
            out = out+ans[i];
        }
        return out;
    }
};
