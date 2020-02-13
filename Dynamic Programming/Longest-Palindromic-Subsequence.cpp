//This ain't the dp approach.
//For dp, we shall create a 2d matrix and rest calculations remain the same.
//This approach might fail for very long strings, i.e. Time Limit may Exceed.

#include<iostream>
using namespace std;
//Dp-Approach Added
int longestPalindromeSubseq(string s) {
        int n = s.size();
        int dp[n][n];
        for(int i= 0 ; i< s.size() ; i++)
            dp[i][i]=1;
        for(int k = 2; k<=n; k++){
            for(int i=0 ; i<n-k+1;i++){
                int j = i+k-1;
                if(k==2 && s[i]==s[j])
                    dp[i][j] = 2;
                else if(s[i]==s[j])
                    dp[i][j] = 2 + dp[i+1][j-1];
                else
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }

int lps(string s, int i, int j){
    if(i==j)
        return 1;
    if(s[i]==s[j] && i+1==j)
        return 2;
    else if(s[i]==s[j])
        return 2 + lps(s,i+1,j-1);
    else
        return (max(lps(s,i+1,j), lps(s,i,j-1)));
}

int longestPalindromeSubseq(string s) {
    int n = s.size();
    if(n==0)
        return 0;
    int i = 0;
    int j = n-1;
    
    return lps(s,i,j);
}

int main(){
    string str = "geeksforgeeks";
    printf("Answer is: %d",longestPalindromeSubseq(str));
    return 0;
}