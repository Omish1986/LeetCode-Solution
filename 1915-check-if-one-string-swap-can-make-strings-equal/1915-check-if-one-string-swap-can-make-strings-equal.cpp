class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n =s1.length();
        vector<int>v1(26);
        vector<int>v2(26);

        for(int i=0;i<n;i++)
        {
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
              

        }
        for(int i=0;i<26;i++)
        {
           if(v1[i]!=v2[i])
           {
            return false;
           }
              

        }
        int cnt=0;
         for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
            }
            if(cnt>2)
            {
                return false;
            }
          
              

        }
        return true;
         
        

        
        
    }
};