class Solution {
public:
bool getdiffarray(vector<int>& nums, vector<vector<int>>& queries,int mid){
    vector<int> temp=nums;
 int n=nums.size();
 vector<int> vec(n,0);
 for(int i=0;i<=mid;i++){
    int li=queries[i][0];
    int ri=queries[i][1];
    int query=queries[i][2];
    vec[li]+=query;
    if(ri+1<n)
     vec[ri+1]-=query;
 }
 int sum=0;
 for(int i=0;i<n;i++){
  sum+=vec[i];
  vec[i]=sum;
 if(nums[i]-vec[i]>0)
  return false;
}
return true;
}
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int q_size=queries.size();
        int low=0, high=q_size-1;
        int ans=-1;
        auto lambda=[](int x){
          return x==0;
        };
      if(all_of(nums.begin(),nums.end(),lambda))
        return 0;
        while(low<=high){
            int mid=(low+high)/2;
            if(getdiffarray(nums,queries,mid)){
                ans=mid+1;
                high=mid-1;
            }
            else
             low=mid+1;
        }
 return ans;

    }
};