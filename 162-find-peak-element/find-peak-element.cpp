class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)
         return 0;
       else if(nums[0]>nums[1])
         return 0; 
         else if(nums[n-1]>nums[n-2])
          return n-1;
          else{        
      int low=1;
      int high=n-2;
      int mid=0;
      while(low<=high){
        mid=(high+low)/2;
        if((nums[mid]>nums[mid-1])&& (nums[mid]>nums[mid+1]))
           return mid;
        else if(nums[mid-1]>nums[mid])
         high=mid-1;
        else
        low=mid+1;
      }
          }
      return -1;
    }
};