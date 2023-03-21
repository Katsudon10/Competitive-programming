#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
void rec(int v,vector<bool> &seen,vector<vector<int>> &G){
    seen[v]=true;
    for(int v2:G[v]){
        if(seen[v2])continue;
        rec(v2,seen,G);
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    Graph G(n);
    vector<bool>seen(n,false);

    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;
      	b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans=0;

    rep(i,n){
        if(seen[i])continue;
        rec(i,seen,G);
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}