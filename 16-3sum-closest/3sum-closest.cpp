class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        int mindiff=INT_MAX;
        int minsum=nums[0]+nums[1]+nums[2];
        sort(begin(nums),end(nums));
        int p,q;
        for(int i=0;i<n-2;i++){
          p=i+1,q=n-1;
          while(p<q){
          sum=nums[i]+nums[p]+nums[q];
          if(abs(target-sum)< abs(target-minsum))
            minsum=sum;
         if(sum<target)
            p++;
            else
            q--;
             
        }
    }
    return minsum;
    }
};