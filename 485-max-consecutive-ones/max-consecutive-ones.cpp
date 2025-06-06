class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int dummy=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                dummy++;
               if(dummy>maxi){
                maxi=dummy;
               }
            }
            else
            dummy=0;
        }
        return maxi;
        
    }
};