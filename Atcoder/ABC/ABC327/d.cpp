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

bool dfs(Graph &G,int v,vector<int> &color){
    for(auto vs:G[v]){
        if(color[vs]!=-1){
            if(color[v]==color[vs])return false;
            continue;
        }
        color[vs]=1-color[v];
        if(!dfs(G,vs,color))return false;
    }
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    Graph G(n);
    vector<int>a(m),b(m);
    rep(i,m){
        cin >> a[i];
        a[i]--;    
    }
    rep(i,m){
        cin >> b[i];
        b[i]--;
    }
    rep(i,m){
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    
    vector<int>color(n,-1);
    bool is_partite=true;
    rep(i,n){
        if(color[i]!=-1)continue;
        color[i]=0;
        if(!dfs(G,i,color))is_partite=false;
    }
    if(is_partite)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}