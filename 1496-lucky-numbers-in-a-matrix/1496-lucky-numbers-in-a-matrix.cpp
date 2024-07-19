class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        int n = m.size();
        int ms = m[0].size();
       
        vector<int> v;
        vector<int> v1;
        vector<int> ans;
         for(int i=0;i<n;i++)
        {
          int mini = INT_MAX;
              for(int j=0;j<ms;j++)
            {
                // cout<<m[i][j]<<endl;
                if(m[i][j]<mini)
                {
                    mini=m[i][j];
                }


            }

            v.push_back(mini);
            
           
        }
         for(int i=0;i<ms;i++)
        {
             int maxi = INT_MIN;

              for(int j=0;j<n;j++)
            {
                // cout<<m[j][i]<<endl;
                if(m[j][i]>maxi)
                {
                    maxi=m[j][i];
                }


            }
                cout<<maxi<<endl;
           
            
                v1.push_back(maxi);
            

           
            
           
        }
        for(int i=0;i<v.size();i++)
        {
            auto ptr = find(v1.begin(),v1.end(),v[i]);
            if(ptr!=v1.end())
            {
                ans.push_back(v[i]);
            }
        }
       
        
      
        return ans;
        
    }
};