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
ll ans=-1;
void dfs(WeightedGraph &G,int v,vector<bool> &seen,ll dist){
    seen[v]=true;
    ans=max(ans,dist);
    for(auto vs:G[v]){
        if(seen[vs.to])continue;
        dfs(G,vs.to,seen,dist+vs.w);
    }
    seen[v]=false;
}

int main(){
    int n,m;
    cin >> n >> m;
    WeightedGraph G(n);
    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        a--;b--;
        G[a].emplace_back(b,c);
        G[b].emplace_back(a,c);
    }

    rep(i,n){
        vector<bool>seen(n,false);
        dfs(G,i,seen,0);
    }
    cout << ans << endl;
    return 0;
}