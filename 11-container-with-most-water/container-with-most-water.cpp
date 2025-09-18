class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxarea=INT_MIN;
        while(i<=j){
        int l=j-i;
        int b=min(height[i],height[j]);
        maxarea=max(maxarea,l*b);
        if(height[i]>=height[j]){
        j--;

        }
        else
        i++;
        }
        return maxarea;
    }
};