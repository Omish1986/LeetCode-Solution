class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        bool flg=false;
        if(left==right)
        {
            return left;
        }
        if(left==1)
        {
            return 0;
        }
        long long int  num1,num2;
        for(int i=0;i<=32;i++)
        {
            long long int  num = pow(2,i);
            if(left==num)
            {
                flg=true;
            }

            if(left>=num)
            {
                num1=num;
            }
            if(right>=num)
            {
                num2=num;
            }

        }
        cout<<num1<<" "<<num2<<endl;
        if(num1!=num2)
        {
            return 0;
        }
        else
        {
            if(flg)
            {
                return left;
            }
            long long int sum1=left;
            for(long long int  i=left+1;i<=right;i++)
            {
                sum1&=i;
                cout<<"hi"<<endl;

            }
            return sum1;

        }
        return 0;
        
        
    }
};