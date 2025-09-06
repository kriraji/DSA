class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
     vector<int> ans;
        int n=order.size();
        int m=friends.size();
        for(int i=0;i<n;i++){
            int l=0;
            int h=m-1;
            int target=order[i];
            while(l<=h){
                int m=l+(h-l)/2;
                if(target==friends[m]){
                    ans.push_back(target);
                     break;
                }
                 else if(target>friends[m])
                   l=m+1;
                   else
                   h=m-1;   
            }
        }
        return ans;
    }
};