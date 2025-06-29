class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        if(k==nums.size())
          return nums;
        vector<int> temp=nums;
        vector<int> ans;
      nth_element(begin(temp),begin(temp)+ k-1,end(temp),greater<int>());
      int kele=temp[k-1];
      int countkele=count(begin(temp),begin(temp)+k,kele);
      for(int &num: nums){
          if(num>kele)
          ans.push_back(num);
          else if(num==kele && countkele>0){
            ans.push_back(num);
            countkele--;
          }
          if(ans.size()==k)
            break;
      }
      return ans;
    }
};