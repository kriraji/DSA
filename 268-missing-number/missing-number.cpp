class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sumof_nums=0;
        int sumofn=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++){
            sumof_nums+=nums[i];
        }
        return(sumofn-sumof_nums);
        
    }
};