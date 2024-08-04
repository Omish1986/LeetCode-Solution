class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>v;
        long long  sum =0;
        long long maxNum=INT_MIN;
        for(long long  x:nums)
        {
           maxNum = max(maxNum,x);

            sum+=x+maxNum;

            v.push_back(sum);


        }
        return v;

        
    }
};