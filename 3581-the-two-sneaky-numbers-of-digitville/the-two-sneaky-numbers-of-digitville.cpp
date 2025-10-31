class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
      vector<int> ans(100,0);
     for(int i=0;i<nums.size();i++)
       ans[nums[i]]++;
    vector<int> res;
    for(int i=0;i<ans.size();i++){
         if(ans[i]==2)
          res.push_back(i);
          if(res.size()==2)
           break;
    }
       return res;
    }
};