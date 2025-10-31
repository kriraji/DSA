class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
     int n=nums.size()-2;
      int sum=0;
      int sqsum=0;
      for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        sqsum+=nums[i]*nums[i];
      }  
      int sum1=sum-(n*(n-1))/2;
      int sum2=sqsum-(n*(n-1)*(2*n-1))/6;
      int c=(sum1*sum1-sum2)/2;
      int x=(sum1+sqrt(sum1*sum1-4*c))/2;
      int y=(sum1-sqrt(sum1*sum1-4*c))/2;
      return{x,y};
    }
};