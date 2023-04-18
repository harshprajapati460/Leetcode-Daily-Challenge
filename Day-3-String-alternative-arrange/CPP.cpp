#include<bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;
        int j = 0;
        while(i < word1.length() || j < word2.length()){
            if(i < word1.length()) ans += word1[i++];
            if(j < word2.length()) ans += word2[j++];
        }
        
        return ans;
    }
int main(){
string a = "abc";
string b = "pqrdsfa";
cout<<mergeAlternately(a,b);
return 0;
}