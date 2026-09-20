// mathametical approch / basic approch 

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
         return false;
     }
     long r=0;
     int n=x;
     while(n>0){
         r=r*10+n%10;
         n/=10;
     }
    return r==x;
    }
};