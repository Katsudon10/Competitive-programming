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

void dfs(int v,Graph &G,vector<int>&prev,vector<bool>&seen){
    seen[v]=true;
    for(int vs:G[v]){
        if(seen[vs])continue;
        prev[vs]=v;
        dfs(vs,G,prev,seen);
    }
}

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    x--;y--;
    Graph G(n);
    rep(i,n-1){
        int u,v;
        cin >> u >> v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<bool>seen(n,false);
    vector<int>prev(n,-1);
    dfs(x,G,prev,seen);

    vector<int>ans;
    int v=y;
    while(v!=-1){
        ans.push_back(v+1);
        v=prev[v];
    }

    reverse(ALL(ans));
    for(int v:ans)cout << v << ' ';
    cout << endl;
    return 0;
}