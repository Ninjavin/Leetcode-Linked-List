#include<iostream>
using namespace std;

int longestRepeatingSubsequence(string str){
    int n = str.size();
    if(n==1){
        return 0;
    }
    if(n==2){
        if(str[0]==str[1]){
            return 1;
        }
    }
    for(int i=0 ; i<=(n-2); i++){
        for(int j=1 ; j<=(n-1) ; j++){
            if(str[i]==str[j]){
                return 1 + 
            }
        }
    }
    
}

int main(){

    return 0;
}