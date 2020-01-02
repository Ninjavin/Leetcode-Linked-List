//Given a valid (IPv4) IP address, return a defanged version of that IP address.

//A defanged IP address replaces every period "." with "[.]".

#include<iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result("");
        for(char c: address){
            if(isdigit(c))
                result+=c;
            else
                result+="[.]";
        }
        return result;
    }
};