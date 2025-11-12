class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> vec(1001,0);
        for(auto &v:trips){
            int numpass=v[0];
            int lstart=v[1];
            int rend=v[2];
            vec[lstart]+=numpass;
            vec[rend]-=numpass;
        }
        int sum=0;
        for(int i=0;i<vec.size();i++){
        sum+=vec[i];
        vec[i]=sum;
        if(vec[i]>capacity)
         return false;
        }
        return true;
    }
};