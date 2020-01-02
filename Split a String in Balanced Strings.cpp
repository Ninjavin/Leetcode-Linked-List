//Balanced strings are those who have equal quantity of 'L' and 'R' characters.
//Given a balanced string s split it in the maximum amount of balanced strings.
//Return the maximum amount of splitted balanced strings.

#include<iostream>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int result = 0;
        for(auto c: s){
            balance = (c=='L') ? balance+1 : balance-1;
            if(balance==0){
                result++;
            }
        }
        return result;
    }
};