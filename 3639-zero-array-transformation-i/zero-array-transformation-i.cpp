class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> vec(n,0);
        for(auto &q:queries){
            int li=q[0];
            int ri=q[1];
            int x=1;
            vec[li]+=x;
            if(ri+1<n)
             vec[ri+1]-=x;
        }
        int cumsum=0;
        for(int i=0;i<n;i++){
            cumsum+=vec[i];
            vec[i]=cumsum;
            if(nums[i]>vec[i])
              return false;
        }
        return true;
    }
};