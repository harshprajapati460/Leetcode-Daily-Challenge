#include<bits/stdc++.h>
using namespace std;
//TIME AND SPACE COMPLEXITY
// TWO LOOPS ONE FOR PUSHIN ELEMENTS AND SECOND FOR DESTROYING THE STONES 
// O(N) + IN EVERY STEP EITHER A STONE IS DESTROYED OR BOTH STONE DESTROYED SO CLOSE TO O(N)
// OVERALL TIME COMPLEXITY O(N)
// S(N) USING PRIORITY QUEUE OF SIZE N
// PROBLEM LINK https://leetcode.com/problems/last-stone-weight/description/
class Solution {
public:    
   int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 1) return stones[0];
        priority_queue<int>pq;
        for(auto it:stones){
            pq.push(it);
        }
        while(pq.size() > 1){
            int x,y;
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();
           if(x != y){
               y = y - x;
               pq.push(y);
           }
        }
        if(pq.size() == 0) return 0;
        else return pq.top();
    }
};
int main(){
Solution obj;
vector<int>arr = {2,7,4,1,8,1};
cout<<obj.lastStoneWeight(arr)<<endl;
return 0;
}