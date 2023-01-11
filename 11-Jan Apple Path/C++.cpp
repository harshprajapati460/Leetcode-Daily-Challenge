class Solution {
public:
    vector<vector<int>>adj;
    vector<bool>seen;
        int e=0;
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        adj=vector<vector<int>>(n);
        seen=vector<bool>(n,false);
        for(auto e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        traversal(0,0,hasApple);
            return e*2;   
    }
    int  traversal(int u,int level,vector<bool>&hasapple)
    {
       
        int temp=1;
        seen[u]=true;
        if(hasapple[u])
        {
            e+=level;
            temp=0;
        }
        for(auto v:adj[u])
        {
           if(!seen[v])
           {
            temp*=traversal(v,level*temp+1,hasapple);
           }
        }
        return temp;   
    }   
};