class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int n=nums.size();
      int k=n/3;
      sort(nums.begin(),nums.end());
      int ele=nums[0];
      vector<int> ans;
      int cnt=0;
      for(int i=0;i<n;i++){
        if(nums[i]==ele)
        cnt++;
        else{
             if(cnt>k)
        ans.push_back(ele);
        ele=nums[i];
        cnt=1;
        }
      }
      if(cnt>k)
      ans.push_back(ele);

      return ans; 
    }
};