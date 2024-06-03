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

ll power(ll a,ll b,ll m){
    ll p=a,ans=1;
    rep(i,60){
        if(b&(1LL<<i)){
            ans=(ans*p)%m;
        }
        p=(p*p)%m;
    }
    return ans;
}

int main(){
    ll n,k;
    cin >> n >> k;
    const int mod=1000000007;
    if(k==1){
        if(n==1)cout << 1 << endl;
        else cout << 0 << endl;
    }else if(n==1){
        cout << k%mod << endl;
    }else if(n==2){
        cout << k*(k-1)%mod << endl;
    }else{
        cout << k*(k-1)%mod*power(k-2,n-2,mod)%mod << endl;
    }
    return 0;
}