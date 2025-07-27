class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int n=letters.size();
       int ind=-1;
       int l=0,h=n-1;
   while(l<=h){
    int mid=l+(h-l)/2;
    if(letters[mid]>target){
        ind=mid;
        h=mid-1;
    }
    else
    l=mid+1;
   }
   if(ind==-1)
     return letters[0];
     else
     return letters[ind];
    }
};