class Solution {
public:
    string reverseWords(string s) {
        int intispace=0;
        int space =0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' '||i==s.length()-1)
            {
                string temp;
                intispace=space;
                space=i+1;
                temp=s.substr(intispace,space-intispace-1);
                if(i==s.length()-1)
                {
                    temp+=s[i];
                }
                reverse(temp.begin(),temp.end());
                cout<<temp<<" "<<i<<endl;
                cout<<space <<" "<<intispace<<endl;
                ans+=temp;
                if(i!=s.length()-1)
                {
                    
                ans+=' ';
                }
                

            }

        }
        return ans;
        
    }
};