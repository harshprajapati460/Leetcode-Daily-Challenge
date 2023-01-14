#include<bits/stdc++.h>
using namespace std;
vector<int>headchar;

int find(int x){
    if(headchar[x] == -1) return x;

    return headchar[x] = find(headchar[x]);
    
    }
void Union(int x,int y){
    int parentx = find(x);
    int parenty = find(y);

    if(parentx == parenty) return ;

headchar[max(parentx,parenty)] = min(parentx,parenty);


}
int main(){
headchar.resize(26,-1);

string s1,s2,basestr;
cin >> s1 >> s2 >> basestr;

for(int i=0;i<s1.length();i++){
    Union(s1[i] - 'a',s2[i] - 'a');

}
for(int i=0;i<basestr.length();i++){
    basestr[i] = find(basestr[i] - 'a') + 'a';

}
cout<<basestr<<endl;


return 0;
}