class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> st;
        vector<int> exonematch;
        vector<int> nolostmatch;
        int m=matches.size();
        int n=matches[0].size();
        unordered_map<int,int> lostmpp;
        for(int i=0;i<m;i++){
         lostmpp[matches[i][n-1]]++;
        }
        for(auto it:lostmpp){
            if(it.second==1)
            exonematch.push_back(it.first);
        }
        for(int i=0;i<m;i++){
          auto it=lostmpp.find(matches[i][n-2]);
          if(it!=lostmpp.end())
            int cnt=0;
            else
              st.insert(matches[i][n-2]);
        }
        for(int ele:st)
         nolostmatch.push_back(ele);
        sort(exonematch.begin(),exonematch.end());
        sort(nolostmatch.begin(),nolostmatch.end());
        vector<vector<int>> ans;
        ans.push_back(nolostmatch);
        ans.push_back(exonematch);
        return ans;
    }
};