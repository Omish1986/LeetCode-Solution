class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int cnt=0;
        int maxi=INT_MIN;
        int indmin;
        int indmax;
        int mini=INT_MAX;

        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                
                if(nums[i]>nums[i+1])
                {
                    cnt++;
                    if(cnt>=2)
                    {
                        return -1;
                    }
                }


            }
            else
            {
                 if(nums[i]>nums[0])
                {
                    cnt++;
                    if(cnt>=2)
                    {
                        return -1;
                    }
                }

            }
            // if(nums[i]<mini)
            // {
            //     mini=nums[i]
            //     indmin=i;
            // }
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                indmax=i;
            }
        }
        return (n-1-indmax);
        
    }
};