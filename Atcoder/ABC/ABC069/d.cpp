#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
const ll INF = 9e18;
using P = pair<int,int>;
struct Edge{
    int to;
    ll cost;
    Edge(int to,ll cost):to(to),cost(cost){}
};
using kEdge = pair<int,pair<int,int>>;
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

vector<int>dxs={0,0,1,-1};
vector<int>dys={1,-1,0,0};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int h,w;

void dfs(vector<vector<int>> &color,int &x,int &y,int c,int &cnt){
    color[x][y]=c;
    cnt--;
    if(cnt==0)return;
    rep(i,4){
        int nx=x+dxs[i],ny=y+dys[i];
        if(nx>=0 && nx<h && ny>=0 && ny<w && color[nx][ny]==0 && cnt>0){
            x=nx,y=ny;
            dfs(color,x,y,c,cnt);
        }
    }
}

int main(){
    cin >> h >> w;
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];

    vector<P>p(n);
    rep(i,n)p[i]=make_pair(a[i],i+1);
    sort(p.rbegin(),p.rend());

    vector<vector<int>>color(h,vector<int>(w,0));
    int x=0,y=0;
    rep(i,n){
        if(color[x][y]==0){
            dfs(color,x,y,p[i].second,p[i].first);
            if(y+1<w && color[x][y+1]==0)y++;
            else if(y-1>=0 && color[x][y-1]==0)y--;
            else if(x+1<h && color[x+1][y]==0)x++;
            else x--;
        }
    }

    rep(i,h){
        rep(j,w){
            cout << color[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}