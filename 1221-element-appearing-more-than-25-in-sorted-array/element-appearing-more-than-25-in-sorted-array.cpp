class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size()==1)
          return arr[0];
         int cnt=0;
         int spc=0;
         int maxi=INT_MIN;
         for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1])
              cnt++;
              else{
               if(cnt>0)
              cnt=0;
              }
              if(cnt>maxi){
                maxi=max(maxi,cnt);
                spc=arr[i];
              }
         }
         return spc;
    }
};