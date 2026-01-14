class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long num=1,cycle=100000; 
        bool ok=false; long long mod=1e18+7;
        string res=to_string(num);
        while(cycle--)
        {
            if(num%k==0) {
                ok=true; break;
            }
            num*=10;num++;
            res+="1";
            num%=k;
        }
        if(ok) return res.size();
        return -1;
    }
};