class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numops) {
        int n=nums.size();
       int maxele=*max_element(nums.begin(),nums.end());
       int maxval=maxele+k;
       int res=0;
       vector<int> vec(maxval+2,0);
       unordered_map<int,int> cnt;
       for(int i=0;i<n;i++){
        cnt[nums[i]]++;
        int li= max(nums[i]-k,0);
        int ri=min(nums[i]+k,maxval);
         vec[li]++;
         vec[ri+1]--;
       }
       int cumsum=0;
       for(int i=0;i<=maxval;i++){
        cumsum+=vec[i];
        vec[i]=cumsum;
        int tarfreq=cnt[i];
        int conv=vec[i]-tarfreq;
        int maxfreq=min(conv,numops);
        res=max(res,tarfreq+maxfreq);

       }
     return res;
    }
};