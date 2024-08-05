class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        vector<int> v;
        int cnt=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<p)
            {
                v.push_back(n[i]);
            }
            if(n[i]==p)
            {
                cnt++;
            }
        }
         for(int i=0;i<cnt;i++)
        {
            v.push_back(p);
            
        }
         for(int i=0;i<n.size();i++)
        {
          if(n[i]>p)
          {
            v.push_back(n[i]);
          }
            
        }
        return v;

        
    }
};