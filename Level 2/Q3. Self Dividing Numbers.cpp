class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++)
        {
            int num=i;bool ok=true;
            while(num)
            {
                if(num%10==0 or i%(num%10)) ok=false;
                num/=10; 
            }
            if(ok) res.push_back(i);
        }
        return res;
    }
};