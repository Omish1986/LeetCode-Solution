class Solution {
public:
     static bool cmp(pair<int,int> &a,pair<int,int> &b)
     {
        if (a.second == b.second) {
            return a.first > b.first;  // For same frequency, sort by value in decreasing 
        }
        return a.second<b.second ;
     }
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans1;
        map<int,int> m;
        vector<pair<int,int>> V;
        pair<int,int> v;
        for(int a: nums)
        {
            m[a]++;

        }
         for(auto a: m)
        {
          V.push_back(a);

        }
        sort(V.begin(),V.end(),cmp);
         for(auto a: V)
        {
            for(int i=0;i<a.second;i++)
            {
                ans.push_back(a.first);
            }
            


          

        }
        return ans;

        
    }
};