class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int quar=n/4;
        for(int i=0;i<n-quar;i++){
            if(arr[i]==arr[i+quar])
            return arr[i];
        }
        return -1;
    }
};