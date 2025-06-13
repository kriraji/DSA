class Solution {
public:
    string largestOddNumber(string num) {
        int i=0;
        int j=0;
        while(j<num.size()){
            if(num[j]%2!=0){
                i=j;
            }
            j++;
        }
        if(num[i]%2==0)
         return num.erase(0,num.size());
       if(i==num.size()-1)
        return num;
  return num.erase(i+1,num.size());
    }
};