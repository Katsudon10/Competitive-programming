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
    int n,q;
    cin >> n >> q;
    vector<ll>a(n);
    rep(i,n)cin >> a[i];
    vector<ll>h(n-1);
    ll ans=0;
    rep(i,n-1){
        h[i]=a[i+1]-a[i];
        ans+=abs(h[i]);
    }

    rep(i,q){
        int l,r,v;
        cin >> l >> r >> v;
        l--,r--;
        if(l>0){
            ans-=abs(h[l-1]);
            h[l-1]+=v;
            ans+=abs(h[l-1]);
        }
        if(r<n-1){
            ans-=abs(h[r]);
            h[r]-=v;
            ans+=abs(h[r]);
        }
        cout << ans << endl;
    }
    
    return 0;
}