class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numops) {
        int n=nums.size();
        map<int,int>diff;
        unordered_map<int,int>cnt;
        int maxval=*max_element(begin(nums),end(nums))+k;
        for(int i=0;i<n;i++){
            cnt[nums[i]]++;
            int li=max(nums[i]-k,0);
            int ri=min(nums[i]+k,maxval);
            diff[li]+=1;
            diff[ri+1]-=1;
            diff[nums[i]]+=0;
        }
        int cumsum=0;
        int res=0;
        for(auto it=diff.begin();it!=diff.end();it++){
        int x=it->first;
        cumsum+=it->second;
        it->second=cumsum;
        int tarfreq=cnt[x];
        int needfreq=it->second-tarfreq;
        int needop=min(needfreq,numops);
        res=max(res,tarfreq+needop);
        }
        return res;
    }
};