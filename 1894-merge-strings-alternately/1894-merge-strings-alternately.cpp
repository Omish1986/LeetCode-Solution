class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a =0;
        string s="";
        while(a<=word1.length()-1&&a<=word2.length()-1)
        {
            s+=word1[a];
            s+=word2[a];
            a++;


        }
        while(a<=word1.length()-1)
        {
            s+=word1[a];
            a++;
            


        }
        while(a<=word2.length()-1)
        {
            s+=word2[a];
            a++;
            


        }
        return s;
        
    }
};