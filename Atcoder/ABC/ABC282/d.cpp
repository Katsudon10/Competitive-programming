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

bool dfs(Graph &G,int v,vector<int> &color,int &ans){
    for(int v2:G[v]){
        if(color[v2]!=-1){
            
        }
        color[v2]=1-color[v];
        dfs(G,v2,color,ans);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int>color(n,-1);
    int ans=0;
    rep(v,n){
        if(color[v]!=-1)continue;
        color[v]=0;
        dfs(G,v,color,ans);
        if(!ans){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}