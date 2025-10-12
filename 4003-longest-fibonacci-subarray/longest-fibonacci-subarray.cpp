class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n=nums.size();
       if(n==1 || n==2)
        return n;
        int len=2,maxi=0;
       for(int i=2;i<n;i++){
      if(nums[i]==nums[i-1]+nums[i-2])
       len++;
       else{
        maxi=max(maxi,len);
        len=2;
       }
       }
       maxi=max(maxi,len);
       return maxi;
    }

};