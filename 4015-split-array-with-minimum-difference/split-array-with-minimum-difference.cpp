class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        int peakind=n-1;
        long long insum=nums[0];
        for(int i=1;i<n;i++){
          if(nums[i-1]>=nums[i]){
             peakind=i-1;
             break;
          } 
          insum+=nums[i];
        }
        if(peakind==n-1)
        return abs(insum-2*(long long)(nums[n-1]));
        long long desum=nums[peakind+1];
        for(int j=peakind+1;j<n-1;j++){
            if(nums[j]<=nums[j+1])
              return -1;
              desum+=nums[j+1];
        }
      long long peakinleft= abs(insum-desum);
      insum-=nums[peakind];
      desum+=nums[peakind];
      long long peakinright=abs(insum-desum);
      ans=min(peakinleft,peakinright);
      return ans;

    }
};