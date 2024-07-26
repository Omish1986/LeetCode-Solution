class Solution {
public:
    #define mod 1000000007;
    long long maximumHappinessSum(vector<int>& h, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(h.size()==1 && k==1) return h[0]; // if only one child is exist
        int n=h.size();
        sort(h.begin(),h.end());// most happiest will be settled at last
        long long sum=h[n-1];int count=1;
        for(int i=n-2;k>1;i--){ // iterating from the end of sorted array
            int num=h[i]-count;
            if(num<0) break; // if happiness is negative, Then next will be obviously negative
            sum+=num%mod;
            k--;count++;
        }
        return sum;
    }
};