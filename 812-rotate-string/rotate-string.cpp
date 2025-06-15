class Solution {
public:
    bool rotateString(string s, string goal) {
        int j=0;
        while(goal[j]!='\0'){
            char temp=s[0];
            int i;
            for(i=0;i<s.size()-1;i++){
                s[i]=s[i+1];
            }
            s[i]=temp;
            if(s==goal)
             return true;
             j++;
        }
        return false;
    }
};