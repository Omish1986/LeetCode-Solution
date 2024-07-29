class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        
        for(char a:s)
        {
            m[a]++;

        }
        vector<pair<char,int>> v(m.begin(),m.end());
        
        sort(v.begin(),v.end(),[](const pair<char,int> &a, const pair<char,int> &b){
            return a.second > b.second;
        });
        string temp="";
        
        for(auto ptr:v)
        {
            for(int i=0;i<ptr.second;i++)
            {
                temp+=ptr.first;
            }
        }
        return temp;
        
    }
};