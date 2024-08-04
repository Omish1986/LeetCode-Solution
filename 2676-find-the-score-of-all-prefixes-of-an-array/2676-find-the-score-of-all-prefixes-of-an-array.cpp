class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>v;
        long long  sum =0;
        long long maxNum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxNum)
            {
                maxNum=nums[i];
            }

            sum+=nums[i]+maxNum;

            v.push_back(sum);


        }
        return v;

        
    }
};