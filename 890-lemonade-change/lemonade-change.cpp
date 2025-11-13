class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int five_rupee_change=0;
       int ten_rupee_change=0;
       for(int i=0;i<bills.size();i++){
          if(bills[i]==5)
           five_rupee_change++;
           else if(bills[i]==10){
             ten_rupee_change++;
            if( five_rupee_change!=0)
               five_rupee_change--;
               else
               return false;
           }
            else{
            if(ten_rupee_change!=0 && five_rupee_change!=0){
              ten_rupee_change--;
              five_rupee_change--;
            }
            else if(five_rupee_change>=3)
             five_rupee_change-=3;
             else
              return false;
       }
       }
       return true;
    }
};