// Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. 
#include<iostream>
#include<algorithm>
using namespace std;

int cutRod(int arr[], int size){
    
    int dp[size+1] = {0};
    for(int i=1; i<=size; i++){
        for(int j=i ; j<=size; j++){
            dp[j] = max(dp[j], dp[j-i]+arr[i-1]);
        }
    }
    return dp[size];
}

int main(){
    int arr[] = {3,5,8,9,10,17,17,20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    printf("Maximum Obtainable Value is %d", cutRod(arr, size)); 
    getchar(); 
    return 0;
}