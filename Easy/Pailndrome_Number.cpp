/* author : @akashsaini */


class Solution {
public:
    bool isPalindrome(int n)
    {
        if(n<0)
        {
            return false;
        }
        long long int nn=n;
        long long int rev=0;
        long long int r;
        while(n)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(nn==rev)
        {
            return true;
        }
        return false;
    }
};
