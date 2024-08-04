class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<long long> ans;
        long long m = nums[0];
        ans.push_back(m + m);

        for (int i = 1; i < nums.size(); i++){
            m = max((long long)nums[i], m);
            ans.push_back(m + ans[i-1] + nums[i]);
        }
        return ans;
    }
};