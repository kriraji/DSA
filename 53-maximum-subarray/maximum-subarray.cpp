class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       int i=0,j=0;
       int sum=0;
       int maxsum=INT_MIN;
       while(j<n){
        sum+=nums[j];
        if(sum>maxsum)
         maxsum=sum;
        while(sum<0){
            sum-=nums[i];
            i++;
        }
        
         j++;
       }
       return maxsum; 
    }
};