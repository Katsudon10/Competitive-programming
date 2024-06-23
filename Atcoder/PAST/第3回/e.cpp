#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
const ll INF = 1e18;
using P = pair<int,int>;
struct Edge{
    int to;
    ll cost;
    Edge(int to,ll cost):to(to),cost(cost){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;


struct UnionFind{
   vector<int> par,rank,siz;
   UnionFind(int n) : par(n,-1),rank(n,0),siz(n,1){ }

   int root(int x){
       if(par[x]==-1)return x;
       else return par[x]=root(par[x]);
   }

   bool issame(int x,int y){
       return root(x)==root(y);
   }

   bool unite(int x,int y){
       int rx=root(x),ry=root(y);
       if(rx==ry)return false;
       if(rank[rx]<rank[ry])swap(rx,ry);
       par[ry]=rx;
       if(rank[rx]==rank[ry])rank[rx]++;
       siz[rx]+=siz[ry];
       return true;
   }

   int size(int x){
       return siz[root(x)];
   }
};
vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    Graph G(n);
    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--,v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<int>c(n);
    rep(i,n)cin >> c[i];

    rep(i,q){
        int t;
        cin >> t;
        if(t==1){
            int x;
            cin >> x;
            x--;
            cout << c[x] << endl;
            for(int v:G[x])c[v]=c[x];
        }else{
            int x,y;
            cin >> x >> y;
            x--;
            cout << c[x] << endl;
            c[x]=y;
        }
    }
    return 0;
}