class Solution {
public:
vector<int> leftsmallest(vector<int>&arr){
    int n=arr.size();
    stack<int> st;
    vector<int> ans;
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[i]<arr[st.top()])
          st.pop();
          if(st.empty())
          ans.push_back(-1);
          else
          ans.push_back(st.top());
          st.push(i);
    }
    return ans;
}
vector<int> rightsmallest(vector<int>&arr){
    int n=arr.size();
    stack<int> st;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[i]<=arr[st.top()])
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
    int largestRectangleArea(vector<int>& heights) {
      int n=heights.size();
      vector<int> NSL= leftsmallest(heights);
      vector<int> NSR=rightsmallest(heights);
      int maxi=INT_MIN;
      int sum=0;
       for(int i=0;i<n;i++){
        sum=(NSR[i]-NSL[i]-1)*heights[i];
        maxi=max(sum,maxi);
       }
       return maxi;
    }
};