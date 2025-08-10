class Solution {
public:
int rev(int val){
    int ans=0;
    while(val>0){
        ans=ans*10+ val%10;
        val=val/10;
    }
    return ans;
}
int m=1e9+7;
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int res=0;
      unordered_map<int,int>mpp;
      for(int i=0;i<n;i++){
        nums[i]=nums[i]-rev(nums[i]);
      } 
      for(int &ele:nums){
        res=(res+mpp[ele])%m;
        mpp[ele]++;
      } 
      return res;
    }
};