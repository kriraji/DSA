class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
      int n=nums.size();
      map<int,int>mpp;
      int max_mex=0;
      for(int val:nums){
        int temp=((val%value)+value)%value;
        mpp[temp]++;
      }
     while(mpp[(max_mex %value)]>0){
        mpp[(max_mex%value)]--;
        max_mex++;
     }
     return max_mex;
    }
};