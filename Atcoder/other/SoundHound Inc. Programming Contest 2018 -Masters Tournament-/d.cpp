#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
const ll INF = 1e18;
using P = pair<ll,int>;
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

void djr(WeightedGraph &g,int s,vector<ll> &d){
    priority_queue<P,vector<P>,greater<P>> que;
    d[s]=0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top();que.pop();

        ll c=p.first;
        int v=p.second;
        if(c>d[v])continue;
        for(auto vs:g[v]){
            ll nd=c+vs.cost;
            int to=vs.to;
            if(chmin(d[to],nd))que.push(P(nd,to));
        }
    }
}

int main(){
    int n,m,s,t;
    cin >> n >> m >> s >> t;
    s--,t--;
    WeightedGraph g1(n),g2(n);
    rep(i,m){
        int u,v,a,b;
        cin >> u >> v >> a >> b;
        u--,v--;
        g1[u].push_back(Edge(v,a));
        g1[v].push_back(Edge(u,a));

        g2[u].push_back(Edge(v,b));
        g2[v].push_back(Edge(u,b));
    }

    vector<ll>d1(n,INF),d2(n,INF);
    djr(g1,s,d1);
    djr(g2,t,d2);

    vector<ll>dist(n);
    rep(i,n)dist[i]=d1[i]+d2[i];
    for(int i=n-2;i>=0;i--){
        chmin(dist[i],dist[i+1]);
    }
    ll x=1e15;
    rep(i,n){
        cout << x-dist[i] << endl;
    }
    return 0;
}