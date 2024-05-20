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
    int h,w;
    cin >> h >> w;
    vector<string>s(h);
    rep(i,h)cin >> s[i];
    vector<vector<int>>dp(h,vector<int>(w,0));
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(s[i][j]=='#')continue;
            dp[i][j]=1;
            if(i+1<h)dp[i][j]=max(dp[i][j],dp[i+1][j]+1);
            if(j+1<w)dp[i][j]=max(dp[i][j],dp[i][j+1]+1);
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}