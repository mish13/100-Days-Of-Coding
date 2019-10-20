vector<string> Solution::fizzBuzz(int A) {
    vector<string> vt;
    for(int i=1;i<=A;i++)
    {
        if(i%3==0 && i%5==0)
        {
            vt.push_back("FizzBuzz");
        }
        else if(i%3==0)
        {
            vt.push_back("Fizz");
        }
        else if(i%5==0)
        {
            vt.push_back("Buzz");
        }
        else
        {
            string s = "";
            int tmp=i;
            while(!tmp==0)
            {
                s = s+char(((tmp%10)+'0'));
                tmp/=10;
            }
            reverse(s.begin(),s.end());
            vt.push_back(s);
        }
    }
    return vt;
}
