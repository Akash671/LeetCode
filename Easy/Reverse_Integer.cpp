class Solution {
public:
    int reverse(int x) {
        long long int rev=0,r;
        while(x)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(rev<-2147483648 || rev>2147483648-1)
        {
            return 0;
        }
        return rev;
    }
};
