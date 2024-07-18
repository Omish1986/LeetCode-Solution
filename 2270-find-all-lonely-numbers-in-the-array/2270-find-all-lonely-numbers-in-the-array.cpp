class Solution {
public:
    vector<int> findLonely(vector<int>& v) {
        int n = v.size();
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;

        }
         for(int i=0;i<n;i++)
        {
            // if(m.find(v[i]+1)!=m.end())
            // {
            //     cout<<"HI"<<v[i]+1<<endl;
            // }
            if(m.find(v[i]+1)==m.end()&&m.find(v[i]-1)==m.end()&&m[v[i]]==1)
            {
                ans.push_back(v[i]);
            }
           

        }
        return ans;
        
    }
};