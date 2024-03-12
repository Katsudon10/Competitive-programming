#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int dfs(Graph &G,int v,vector<bool> &seen){
    seen[v]=true;
    int res=1;
    for(int vs:G[v]){
        if(seen[vs])continue;
        res+=dfs(G,vs,seen);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    Graph G(n);
    rep(i,n-1){
        int u,v;
        cin >> u >> v;
        u--,v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int ans=n;
    for(int v:G[0]){
        vector<bool>seen(n,false);
        seen[0]=true;
        int s=n-dfs(G,v,seen); //n-最大値の最小値が答え
        ans=min(ans,s);
    }
    cout << ans << endl;
    return 0;
}