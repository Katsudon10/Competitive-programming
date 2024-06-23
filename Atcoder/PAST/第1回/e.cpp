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
    vector<vector<int>>f(n,vector<int>(n,0));

    rep(i,q){
        int x;
        cin >> x;
        if(x==1){
            int a,b;
            cin >> a >> b;
            a--,b--;
            f[a][b]=1;
        }else if(x==2){
            int a;
            cin >> a;
            a--;
            rep(j,n){
                if(f[j][a]==1)f[a][j]=1;
            }
        }else{
            int a;
            cin >> a;
            a--;
            vector<int>v;
            rep(j,n){
                if(f[a][j]==1)v.push_back(j);
            }
            for(int j:v){
                rep(k,n){
                    if(f[j][k]==1)f[a][k]=1;
                }
            }
        }
    }
    rep(i,n)f[i][i]=0;

    rep(i,n){
        rep(j,n){
            if(f[i][j]==1)cout << 'Y';
            else cout << 'N';
        }
        cout << endl;
    }
    return 0;
}