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

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int h,w;

int check(vector<string> &s,int x,int y,int d,vector<vector<bool>>&flag){
    int cnt=1;
    flag[x][y]=true;
    for(int i=-d;i<=d;i++){
        for(int j=-d;j<=d;j++){
            int nx=x+i,ny=y+j;
            if(abs(x-nx)+abs(y-ny)>d)continue;
            if(nx>=0 && nx<h && ny>=0 && ny<w){
                if(s[nx][ny]=='.' && !flag[nx][ny]){
                    cnt++;
                    flag[nx][ny]=true;    
                }
            }
        }
    }
    return cnt;
}

int main(){
    int d;
    cin >> h >> w >> d;
    vector<string>s(h);
    rep(i,h)cin >> s[i];
    vector<P>p;
    rep(i,h)rep(j,w)if(s[i][j]=='.')p.emplace_back(i,j);

    int n=p.size();
    vector<int>cnt;

    rep(i,n){
        rep(j,n){
            if(i>j)continue;
            vector<vector<bool>>flag(h,vector<bool>(w,false));
            int x=check(s,p[i].first,p[i].second,d,flag);
            if(flag[p[j].first][p[j].second])x--;
            int y=check(s,p[j].first,p[j].second,d,flag);
            cnt.push_back(x+y);
        }
    }
    
    sort(ALL(cnt));
    cout << cnt.back() << endl;
    return 0;
}