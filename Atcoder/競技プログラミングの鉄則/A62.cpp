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
void dfs(int v,vector<vector<int>> &G,vector<bool> &visited){
    visited[v]=true;
    for(int vs:G[v]){
        if(visited[vs])continue;
        dfs(vs,G,visited);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n+1);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool>visited(n+1,false);
    dfs(1,G,visited);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout << "The graph is not connected." << endl;
            return 0;
        }
    }
    cout << "The graph is connected." << endl;
    return 0;
}