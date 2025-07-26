class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int>st;
        long long sum=0, ans=0;
        int i=0,j;
        for(j=0;j<nums.size();j++){
           while(st.count(nums[j])){
            sum-=nums[i];
            st.erase(nums[i]);
            i++;
           }
            sum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k){
                ans=max(ans,sum);
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            } 
        }
     return ans;
    }
};