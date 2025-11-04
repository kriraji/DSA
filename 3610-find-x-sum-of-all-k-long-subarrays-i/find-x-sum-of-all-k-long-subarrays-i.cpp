class Solution {
public:
typedef pair<int,int> p;
int sumtopx(unordered_map<int,int>&mpp,int x){
    priority_queue<p,vector<p>,greater<p>> minheap;
    for(auto &it: mpp){
     minheap.push({it.second,it.first});
     if(minheap.size()>x)
      minheap.pop();
    }
      int sum=0;
      while(!minheap.empty()){
        auto p=minheap.top();
        minheap.pop();
        sum+=p.first*p.second;
      }
      return sum;

}
    vector<int> findXSum(vector<int>& nums, int k, int x) {
      int n=nums.size();
      unordered_map<int,int>mpp;
      vector<int> ans;
      int i=0,j=0;
      while(j<n){
        mpp[nums[j]]++;
        if(j-i+1==k){
            int val=sumtopx(mpp,x);
            ans.push_back(val);
            mpp[nums[i]]--;
            if(mpp[nums[i]]==0)
             mpp.erase(nums[i]);
             i++;
        }
        j++;
      } 
      return ans; 
    }
};