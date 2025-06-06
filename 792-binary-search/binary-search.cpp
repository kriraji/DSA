class Solution {
public:
    int search(vector<int>& nums, int target) {
          int lb=0,mid;
       int hb=nums.size()-1;
        while(lb<=hb){
            mid=(lb+hb)/2;
            if(nums[mid]==target)
               return mid;
            else if(nums[mid]>target)
                hb=mid-1;
                else
                lb=mid+1;
            }
           return -1;
    }
};