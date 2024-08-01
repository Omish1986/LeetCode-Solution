class Solution {
public:
    int countSeniors(vector<string>& s) {
           int cnt=0;
        for(int i=0;i<s.size();i++)
        {
           string s1 = s[i].substr(11,2);
           string s2 ="60";

            if(s1>s2)
            {
                cnt++;
            }




        }
        return cnt;
        
    }
};