//Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include<iostream>
using namespace std;
int product(int n){
    int pro = 1;
    while(n>0){
        int digit = n%10;
        pro = pro * digit;
        n = n/10;
    }
    return pro;
}

int sum(int n){
    int res = 0;
    while(n>0){
        int digit = n%10;
        res = res+digit;
        n=n/10;
    }
    return res;
}

class Solution {
public:
    int subtractProductAndSum(int n) {
        return (product(n)-sum(n));
    }
};