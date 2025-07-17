class Solution {
    vector<int> NSL(vector<int> &nums){
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty()&&nums[i]<nums[st.top()])
             st.pop();
             if(st.empty())
              ans.push_back(-1);
              else
              ans.push_back(st.top());
              st.push(i);
        }
        return ans;
    }
      vector<int> NSR(vector<int> &nums){
        int n=nums.size();
        vector<int> ans;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums[i]<=nums[st.top()])
             st.pop();
             if(st.empty())
              ans.push_back(n);
              else
              ans.push_back(st.top());
              st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> ls=NSL(arr);
        vector<int> rs=NSR(arr);
        int m= 1000000007;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(long long)(i-ls[i])*(rs[i]-i)*arr[i];
        }
        return (sum%m);
    }
};