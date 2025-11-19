class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        unordered_set<int>st;
        for(int num:nums)
         st.insert(num);
         bool flag=true;
         while(flag){
            if(st.find(original)!=st.end()){
                original=2*original;
            }
            else
             flag=false;             
         }
        return  original;
    }
};