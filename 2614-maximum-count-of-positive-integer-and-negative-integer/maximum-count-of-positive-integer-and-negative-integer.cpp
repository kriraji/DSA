class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
       if((nums[0]>0 &&nums[n-1]>0) || (nums[0]<0&&nums[n-1]<0))
          return n;
    int low=0;
    int high=n-1;
    int negamid=-1;
    while(low<=high){
     int mid=low+(high-low)/2;
    if(nums[mid]<0 &&nums[mid+1]>=0){
        negamid=mid;
        break;
    }
       else if(nums[mid]<0 && nums[mid+1]<0)
         low=mid+1;
         else
         high=mid-1;
    }
int ind=negamid+1;
int poscnt=0;
for(int i=ind;i<n;i++){
  if(nums[i]!=0)
    poscnt++;
}
return max(poscnt,ind);
    }
};