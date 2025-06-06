class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      long int low=1;
      long int high=*max_element(piles.begin(), piles.end());
      long int mid=0;
      int ans=0;
      while(low<=high){
        mid=(low+high)/2;
       long int total_hrs=func(piles,mid);
        if(total_hrs<=h){
            ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
      }  
    return ans;
    }
  long int func(vector<int> &nums,long int k){
    long int sum=0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]%k==0)
            sum+=(nums[i]/k);
            else sum+=(nums[i]/k)+1;
    return sum;
    }
};