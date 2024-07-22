class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {

        vector<string> v;
        map<int,string> m;
        for(int i=0;i<h.size();i++)
        {
            m[h[i]]=names[i];

        }
        // sort(m.begin(),m.end());
     for(auto i = --m.end(); i != m.begin(); --i) {
    v.push_back(i->second);
       }
       auto p = m.begin();
       v.push_back(p->second);
       return v;

        

        
    }
};