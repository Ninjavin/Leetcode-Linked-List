// Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. 
#include<iostream>
#include<vector>
using namespace std;

int cutRod(int arr[], int size){
    vector<vector<int>> dp(size, vector<int> (size+1));
    for(int i=0; i<size; i++){
        for(int j=0 ; j<=size; j++){
            if(j==0){
                dp[i][j] = 0;
            }
            else if(i==0){
                dp[i][j] = arr[i]*j;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-i]+arr[i]);
            }
        }
    }
    return dp[size-1][size];
}

int main(){
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    printf("Maximum Obtainable Value is %dn", cutRod(arr, size)); 
    getchar(); 
    return 0;
}