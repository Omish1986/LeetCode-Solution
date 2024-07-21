class Solution {
public:
    int findComplement(int num) {

        string str="";
        long long int sum=0;
        str+=to_string(!(num&1));
        while(num!=0)
        {
            num=num>>1;
            // int a = !(num&1);
            // cout<<a<<endl;
        str+=to_string(!(num&1));

             
        }
        cout<<str<<endl;
        // reverse(str.begin(),str.end());

        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i]=='1')
            {
            sum+=pow(2,i);

            }

        }
        
        return sum;
        
    }
};