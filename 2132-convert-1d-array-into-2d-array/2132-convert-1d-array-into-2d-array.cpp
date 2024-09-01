class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
         ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        vector<vector<int>> v;
        vector<int> vec;
        int num = o.size();
        if(num!=m*n)
        {
            return v;
        }
        for(int i=0;i<num;i++)
        {
            if(i%n==0&&i!=0)
            {
                v.push_back(vec);
                vec.clear();
                vec.push_back(o[i]);
                cout<<o[i]<<endl;
            }
            else
            {
                vec.push_back(o[i]);
            }
        }
        v.push_back(vec);



        return v;
        
    }
};