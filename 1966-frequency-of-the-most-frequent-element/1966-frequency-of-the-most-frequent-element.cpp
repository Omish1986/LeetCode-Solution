class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
       long long int sum=0;
       int maxf=INT_MIN;
       int start=0;
       int end=0;
        sort(nums.begin(),nums.end());
       while(end<n)
       {
          sum+=nums[end++];
          if(k+sum<(long)nums[end-1]*(end-start))
          {
            sum-=nums[start++];
           

          }
          maxf=max(maxf,end-start);

       }
       return maxf;
     
    
           
            

            
        
            
    }
};