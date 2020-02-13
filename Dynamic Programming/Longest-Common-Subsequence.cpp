// Given two strings text1 and text2, return the length of their longest common subsequence.
// A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without changing the relative order of the remaining characters. (eg, "ace" is a subsequence of "abcde" while "aec" is not). A common subsequence of two strings is a subsequence that is common to both strings.

#include<iostream>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();
    int i=0;
    int j = 0;
    return lcs(text1, text2, m, n, i, j);
}
int lcs(string text1, string text2, int m, int n, int i, int j){
    if(i==m || j==n)
        return 0;
    else if(text1[i]==text2[j])
        return 1+lcs(text1,text2,m,n,i+1,j+1);
    else
        return max(lcs(text1,text2,m,n,i+1,j),lcs(text1,text2,m,n,i,j+1));
}

int main(){
    string text1 = "abcde";
    string text2 = "ace";
    longestCommonSubsequence(text1,text2);
    return 0;
}