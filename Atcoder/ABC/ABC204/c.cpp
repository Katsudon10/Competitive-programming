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
void dfs(int v,Graph &G,vector<bool> &seen){
    seen[v]=true;
    for(int rec:G[v]){
        if(!seen[rec]){
            dfs(rec,G,seen);
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    ll ans=0;
    rep(i,n){
        vector<bool>seen(n,false);
        dfs(i,G,seen);
        rep(j,n){
            if(seen[j])ans++;
        }
    }
    cout << ans << endl;
    return 0;
}