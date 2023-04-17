//TIME COMPLEXITY O(N.M)
#include<bits/stdc++.h>
using namespace std;
    
class Solution {
public:
     int util(int x,int y,string a,string b,vector<vector<int>>&dp){
        
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                if(a[i-1] == b[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
    int longestPalindromeSubseq(string s1) {
        int x = s1.length();

        vector<vector<int>> dp(x+1, vector<int>(x+1,0));

        for(int i = 1; i<=x; i++){
            for(int j = 1; j <= x; j++){
                dp[i][j] = -1;

            }
        }
       
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        return util(x,x,s1,s2,dp);

    }
};
int main(){
  Solution obj;
  cout<<obj.longestPalindromeSubseq("abababb")<<endl;
}