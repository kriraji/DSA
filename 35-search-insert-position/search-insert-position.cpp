class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=0;
        int hb=nums.size()-1;
        int mid;
        int ans=nums.size();
        while(lb<=hb){
            mid=(lb+hb)/2;
             if(nums[mid]>=target){
                ans=mid;
                hb=mid-1;
            }
                else
                lb=mid+1;



            }
          return ans;
        }
        
};