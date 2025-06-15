class Solution {
public:
    bool rotateString(string s, string goal) {
    return(s.length()==goal.length() && ((s+s).find(goal)<LONG_MIN));
    }
};