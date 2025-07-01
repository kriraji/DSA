class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
    int n=height.size();
    vector<int> prefixmax;
    vector<int> suffixmax;
    prefixmax.push_back(height[0]);
    for(int i=1;i<n;i++){
        prefixmax.push_back(max(prefixmax[i-1],height[i]));
    }
   suffixmax.push_back(height[n-1]);
    for(int i=n-2,j=1;i>=0;i--,j++){
        suffixmax.push_back(max(suffixmax[j-1],height[i]));
    }
    reverse(suffixmax.begin(),suffixmax.end()); 
    for(int i=0;i<n;i++){
        int leftmax=prefixmax[i];
        int rightmax=suffixmax[i];
        if(leftmax>height[i] && rightmax>height[i])
         ans+=min(leftmax,rightmax)-height[i];
    }
    return ans;
    }
};