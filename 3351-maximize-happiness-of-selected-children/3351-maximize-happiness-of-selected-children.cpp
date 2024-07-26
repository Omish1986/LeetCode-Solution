class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long int a=0;
        sort(h.rbegin(),h.rend());
        for(int i=0;i<k;i++)
        {
            int num=h[i]-i;
            if(num>0)
            a+=num;
        }
        return a;
        
    }
};