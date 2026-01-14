class Solution {
public:
    bool IsPrime(int n)
    {
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        if(n==1 or n==2 or n==3 or n==5) return false;
        return true;
    }
    bool isUgly(int n) {
        if(n<=0 or IsPrime(n)) return false;
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(IsPrime(i) or IsPrime(n/i))
                    return false;
            }
        }
        return true;
    }
};