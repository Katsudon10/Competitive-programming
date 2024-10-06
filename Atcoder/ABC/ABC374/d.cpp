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
    int n,s,t;
    cin >> n >> s >> t;
    vector<int>a(n),b(n),c(n),d(n);

    rep(i,n){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    double ans=inf;
    
    vector<int>v(n);
    rep(i,n)v[i]=i;
    double dist=0;
    rep(i,n){
        double dx=a[i]-c[i],dy=b[i]-d[i];
        dist+=sqrt(dx*dx+dy*dy)*1.0/t;
    }

    do{
        for(int bit=0;bit<(1<<n);bit++){
            double ts=dist;
            int x=0,y=0;
            double dx,dy;
            rep(i,n){
                if(bit&(1<<i)){
                    dx=x-a[v[i]],dy=y-b[v[i]];
                    x=c[v[i]],y=d[v[i]];
                }else{
                    dx=x-c[v[i]],dy=y-d[v[i]];
                    x=a[v[i]],y=b[v[i]];
                }
                ts+=sqrt(dx*dx+dy*dy)*1.0/s;
            }
            chmin(ans,ts);
        }
    }while(next_permutation(ALL(v)));
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}