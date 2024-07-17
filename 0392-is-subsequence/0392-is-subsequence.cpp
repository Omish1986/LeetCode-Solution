class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1=0;
        int p2=0;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[p1])
            {
                p1++;
            }
        }

        // map<char,int> m1;
        // map<char,int> m2;
        // string str="";
        // for(char c:t)
        // {
        //     cout<<s.find(c)<<endl;
        //     if(s.find(c)<s.length())
        //     {
        //         str+=c;
        //     }
        //     m1[c]++;
        // }
        // for(char c:s)
        // {
        //     m2[c]++;

        // }
        // for(auto ptr:m2)
        // {
        //     if(m1[ptr.first]<ptr.second)
        //     {
        //         return false;
        //     }
        // }
        // cout<<str<<endl;
        if(p1==s.length())
        {
            return true;
        }
        cout<<p1<<endl;
        return false;
        
    }
};