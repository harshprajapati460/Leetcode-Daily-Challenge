#include<bits/stdc++.h>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>&candies, int extraCandies) {
        int n = candies.size();
        int maxi = *max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(int i = 0 ; i < n ; i++){
            if(candies[i]+extraCandies >= maxi){
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
int main(){
  
  vector<int>arr = {2,3,5,1,3};
  int extra = 3;
  vector<bool>ans = kidsWithCandies(arr,extra);
  cout<<"Kids with maxi candies: ";
  for(auto it:ans){
    if(it){
        cout<<"True"<<" ";
    }
    else {
        cout<<"False"<<" ";
    }
  }
return 0;
}