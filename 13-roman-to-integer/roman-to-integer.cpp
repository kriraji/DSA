class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int sum=0;
        while(s[i]!='\0'){
            if(s[i]=='I'&& s[i+1]=='V'){
             sum+=4;
             i++;
            }
             else if(s[i]=='I'&& s[i+1]=='X'){
             sum+=9;
             i++;
             }
              else if(s[i]=='C'&& s[i+1]=='D'){
             sum+=400;
             i++;
              }
              else if(s[i]=='C'&& s[i+1]=='M'){
             sum+=900;
             i++;
              }
              else if(s[i]=='X'&& s[i+1]=='L'){
             sum+=40;
             i++;
              }
              else if(s[i]=='X'&& s[i+1]=='C'){
             sum+=90;
             i++;
        }     else
             sum+=roval(s[i]);
             
             i++;
              
        }
       return sum;
    }
    int roval(char ch){
        if(ch=='I')
        return 1;
        if(ch=='V')
        return 5;
        if(ch=='X')
        return 10;
        if(ch=='L')
        return 50;
        if(ch=='C')
        return 100;
        if(ch=='D')
        return 500;
        if(ch=='M')
        return 1000;
        return 0;
    }
};