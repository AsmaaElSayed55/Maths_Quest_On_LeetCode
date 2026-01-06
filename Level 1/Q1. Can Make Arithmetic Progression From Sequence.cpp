class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int incrase=arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++)
        {
            if(abs(arr[i]-arr[i+1])!=incrase)
                return false;
        }
        return true;
    }
};