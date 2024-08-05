class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<pair<int,vector<int>>> m;
        vector<vector<int>> ans;

       
        for(int i=0;i<s.size();i++)
        {
            m.push_back({s[i][k],s[i]});
           
        }
        
        sort(m.begin(),m.end(),[](const pair<int,vector<int>> &a,const pair<int,vector<int>> &b)
        {
            return a.first> b.first;
        } );

        for(auto ptr: m)
        {
            ans.push_back(ptr.second);
            
        }
        return ans;
    }
};