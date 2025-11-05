class Solution {
public:
long long sum=0;
set<pair<int,int>> prim;
set<pair<int,int>> sec;
void insertin(const pair<int,int>&p,int x){
    if(prim.size()<x || p > *prim.begin()){
        sum+=1LL*p.first*p.second;
        prim.insert(p);

    if(prim.size()>x){
        auto small=*prim.begin();
        sum-=1LL*small.first*small.second;
        prim.erase(small);
        sec.insert({small});
    }
    }
    else
    sec.insert(p);
}
void delset(const pair<int,int>&p){
    if(prim.find(p)!=prim.end()){
        sum-=1LL*p.first*p.second;
        prim.erase(p);
        if(!sec.empty()){
            auto large=*sec.rbegin();
            sec.erase(large);
            prim.insert(large);
            sum+=1LL*large.first*large.second;
        }
    }
    else
    sec.erase(p);
}
    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<long long> ans;
        unordered_map<int,int>mpp;
        sum=0;
        int i=0,j=0;
        while(j<n){
            if(mpp[nums[j]]>0){
                delset({mpp[nums[j]],nums[j]});
            }
            mpp[nums[j]]++;
            insertin({mpp[nums[j]],nums[j]},x);
            if(j-i+1==k){
                ans.push_back(sum);
                delset({mpp[nums[i]],nums[i]});
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0)
                 mpp.erase(nums[i]);
                 else{
                    insertin({mpp[nums[i]],nums[i]},x);
                 }
                 i++;
            }
            j++;
        }
 return ans;
    }
};