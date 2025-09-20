class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        int mindiff=INT_MAX;
        int minsum;
        sort(begin(nums),end(nums));
        int p,q;
        for(int i=0;i<n-2;i++){
          p=i+1,q=n-1;
          while(p<q){
          sum=nums[i]+nums[p]+nums[q];
          int diff=abs(target-sum);
          if(diff< mindiff){
            minsum=sum;
            mindiff=diff;
          }
         if(sum<target)
            p++;
            else
            q--;
             
        }
    }
    return minsum;
    }
};