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

class SegmentTree{
   public:
   vector<int>dat;
   int siz=1;

   void init(int N){
       siz=1;
       while(siz<N)siz*=2;
       dat=vector<int>(2*siz,0);
   }

   void update(int pos,int x){
       pos=pos+siz-1;
       dat[pos]=x;
       while(pos>=2){
           pos/=2;
           dat[pos]=max(dat[pos*2],dat[pos*2+1]);
       }
   }

   int query(int l,int r,int a,int b,int u){
       if(r<=a || b<=l)return -100000000;
       if(l<=a && b<=r)return dat[u];
       int m=(a+b)/2;
       int AnsL=query(l,r,a,m,u*2);
       int AnsR=query(l,r,m,b,u*2+1);
       return max(AnsL,AnsR);
   }
};

template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n;
    cin >> n;
    vector<vector<bool>>g(n,vector<bool>(n,false)),h(n,vector<bool>(n,false));
    int mg;
    cin >> mg;
    rep(i,mg){
        int u,v;
        cin >> u >> v;
        u--,v--;
        g[u][v]=true;
        g[v][u]=true;
    }

    int mh;
    cin >> mh;
    rep(i,mh){
        int a,b;
        cin >> a >> b;
        a--,b--;
        h[a][b]=true;
        h[b][a]=true;
    }

    vector<vector<int>>a(n,vector<int>(n,0));
    rep(i,n-1){
        for(int j=i+1;j<n;j++){
            cin >> a[i][j];
            a[j][i]=a[i][j];
        }
    }

    vector<int>v(n);
    rep(i,n)v[i]=i;
    int ans=inf;
    do{
        int sum=0;
        rep(i,n)rep(j,i){
            if(h[i][j]!=g[v[i]][v[j]])sum+=a[i][j];
        }
        ans=min(ans,sum);
    }while(next_permutation(ALL(v)));
    cout << ans << endl;
    return 0;
}