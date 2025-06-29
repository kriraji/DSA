class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        if(nums.size()==k)
        return nums;
        int n=nums.size();
        vector<int> vec=nums;
        vector<int> ans;
        vector<int> temp;
        sort(begin(vec),end(vec));
        for(int i=n-k;i<n;i++)
          temp.push_back(vec[i]);
   int kthele=temp[0];
   int countk=count(begin(temp),end(temp),kthele);
   for(int &num:nums){
    if(num>kthele)
     ans.push_back(num);
     else if(num==kthele && countk>0){
       ans.push_back(num);
       countk--;
     }
     if(ans.size()==k)
      break;
   }
return ans;
    }
};