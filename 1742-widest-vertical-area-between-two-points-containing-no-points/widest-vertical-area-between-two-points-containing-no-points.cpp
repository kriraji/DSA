class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxwid=INT_MIN;
      vector<int> xcord;
      for(int i=0;i<points.size();i++)
        xcord.push_back(points[i][0]);  
    sort(xcord.begin(),xcord.end());
    for(int i=1;i<xcord.size();i++){
       int len=xcord[i]-xcord[i-1];
        maxwid=max(maxwid,len);
    }
    return maxwid;
    }
};