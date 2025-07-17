class Solution {
public:
vector<int> NSL(vector<int> &vec){
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<vec.size();i++){
            while(!st.empty()&&vec[i]<vec[st.top()])
             st.pop();
             if(st.empty())
              ans.push_back(-1);
              else
              ans.push_back(st.top());
              st.push(i);
        }
        return ans;
    }
      vector<int> NSR(vector<int> &vec){
        int n=vec.size();
        vector<int> ans;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&vec[i]<=vec[st.top()])
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
long long minimumele(vector<int> &arr){
    int n=arr.size();
    vector<int> ls=NSL(arr);
    vector<int> rs=NSR(arr);
    long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(long long)(i-ls[i])*(rs[i]-i)*arr[i];
        }
        return sum;
}
vector<int> NGL(vector<int> &vec){
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<vec.size();i++){
            while(!st.empty()&&vec[i]>vec[st.top()])
             st.pop();
             if(st.empty())
              ans.push_back(-1);
              else
              ans.push_back(st.top());
              st.push(i);
        }
        return ans;
    }
      vector<int> NGR(vector<int> &vec){
        int n=vec.size();
        vector<int> ans;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&vec[i]>=vec[st.top()])
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
    long long maximumele(vector<int> &arr){
    int n=arr.size();
    vector<int> lg=NGL(arr);
    vector<int> rg=NGR(arr);
    long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(long long)(i-lg[i])*(rg[i]-i)*arr[i];
        }
        return sum;
}
    long long subArrayRanges(vector<int>& nums) {
        long long smallest=minimumele(nums);
        long long largest=maximumele(nums);
        return(largest-smallest);
    }
};