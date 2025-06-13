class Solution {
public:
    string largestOddNumber(string num) {
         int i=-1;
        int j=0;
        while(j<num.size()){
            if(num[j]%2!=0){
                i=j;
            }
            j++;
        }
  return num.erase(i+1,num.size());
    }
};