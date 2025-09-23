class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       int mid=n/2;
       if(nums[0]==nums[mid])
         return nums[0];
         else if(nums[mid]==nums[n-1])
          return nums[n-1];
          else if(nums[mid]==nums[mid-1] && nums[mid]==nums[mid+1])
          return nums[mid];
          else 
          return -1;

    }
};