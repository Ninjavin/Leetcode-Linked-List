//Given an array nums of integers, return how many of them contain an even number of digits.

#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i : nums){
            int count = 0;
            while(i>=1){
                count++;
                i = i/10;
            }
            if(count%2==0)
                result++;
        }
        return result;
    }
    
};