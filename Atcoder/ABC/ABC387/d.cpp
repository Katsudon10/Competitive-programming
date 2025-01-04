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

int main(){
    int h,w;
    cin >> h >> w;
    vector<string>s(h);
    rep(i,h)cin >> s[i];
    int sx,sy;
    rep(i,h)rep(j,w)if(s[i][j]=='S'){
        sx=i,sy=j;
    }
    vector<vector<int>>dist1(h,vector<int>(w,-1));
    vector<vector<int>>dist2(h,vector<int>(w,-1));
    queue<pair<P,int>>que;
    dist1[sx][sy]=dist2[sx][sy]=0;
    que.emplace(make_pair(P(sx,sy),-1));

    while(!que.empty()){
        int x=que.front().first.first;
        int y=que.front().first.second;
        int r=que.front().second;
        que.pop();
        if(s[x][y]=='G'){
            cout << max(dist1[x][y],dist2[x][y]) << endl;
            return 0;
        }
        if(r==-1){
            rep(i,4){
                int nx=x+dxs[i],ny=y+dys[i];
                if(nx>=0 && nx<h && ny>=0 && ny<w && s[nx][ny]!='#'){
                    if(dxs[i]!=0){
                        que.emplace(P(nx,ny),1);
                        dist1[nx][ny]=dist2[x][y]+1;    
                    }else{
                        que.emplace(P(nx,ny),0);
                        dist2[nx][ny]=dist1[x][y]+1;
                    }                
                }
            }
        }else if(r==0){
            int nx=x+1,ny=y;
            if(nx>=0 && nx<h && ny>=0 && ny<w && dist1[nx][ny]==-1 && s[nx][ny]!='#'){
                dist1[nx][ny]=dist2[x][y]+1;
                que.emplace(P(nx,ny),1);
            }
            nx=x-1;
            if(nx>=0 && nx<h && ny>=0 && ny<w && dist1[nx][ny]==-1 && s[nx][ny]!='#'){
                dist1[nx][ny]=dist2[x][y]+1;
                que.emplace(P(nx,ny),1);
            }
        }else if(r==1){
            int nx=x,ny=y+1;
            if(nx>=0 && nx<h && ny>=0 && ny<w && dist2[nx][ny]==-1 && s[nx][ny]!='#'){
                dist2[nx][ny]=dist1[x][y]+1;
                que.emplace(P(nx,ny),0);
            }
            ny=y-1;
            if(nx>=0 && nx<h && ny>=0 && ny<w && dist2[nx][ny]==-1 && s[nx][ny]!='#'){
                dist2[nx][ny]=dist1[x][y]+1;
                que.emplace(P(nx,ny),0);
            }        
        }
    }
    cout << -1 << endl;
    return 0;
}