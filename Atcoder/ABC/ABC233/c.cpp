#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());
vector<vector<ll>>a;
int n;
ll x;
int ans=0;
void dfs(int v,ll s){
    if(v==n){
        if(s==x)ans++;
        return;
    }
    rep(i,a[v].size()){
        if(s>x/a[v][i])continue;
        dfs(v+1,s*a[v][i]);
    }
}

int main(){
    cin >> n >> x;
    a= vector<vector<ll>>(n);
    rep(i,n){
        int l;
        cin >> l;
        a[i]=vector<ll>(l);
        rep(j,l)cin >> a[i][j];
    }
    dfs(0,1);
    cout << ans << endl;
    return 0;
}