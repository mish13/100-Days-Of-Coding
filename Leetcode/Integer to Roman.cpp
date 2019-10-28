//Runtime: 8 ms, faster than 76.93% of C++ online submissions for Integer to Roman.
//Memory Usage: 8.5 MB, less than 84.21% of C++ online submissions for Integer to Roman.

class Solution {
public:
    string intToRoman(int num) {
        string nums[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        int i=0;
        while(num!=0 && i<13)
        {
            if(num>=arr[i])
            {
                int t = num/arr[i];
                while(t--)
                {
                    ans = ans+nums[i];
                }
                num%=arr[i];
            }
            i++;
        }
        return ans;
    }
};
