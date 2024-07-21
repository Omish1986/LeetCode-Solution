class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
       long long int sum=0;
       int maxf=INT_MIN;
       int start=0;
       int end=0;
        sort(nums.begin(),nums.end());
       for(end=0;end<n;end++)
       {
          sum+=nums[end];
          while(k+sum<(long)nums[end]*(end-start+1))
          {
            sum-=nums[start];
            start++;

          }
          maxf=max(maxf,end-start+1);

       }
       return maxf;
     
    
           
            

            
        
            
    }
};