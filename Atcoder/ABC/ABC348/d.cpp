#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
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

int h,w;

bool dfs(vector<vector<char>> &G,vector<vector<int>> &E,int x,int y,vector<vector<bool>> &seen,int energy){
    seen[x][y]=true;
    energy=max(energy,E[x][y]);
    if(G[x][y]=='T'){
        return true;
    }
    if(energy==0)return false;

    rep(i,4){
        int dx=x+dxs[i];
        int dy=y+dys[i];
        if(dx>=0 && dx<h && dy>=0 && dy<w && !seen[dx][dy] && G[dx][dy]!='#'){
            int e=energy-1;
            if(dfs(G,E,dx,dy,seen,e)) return true;
        }
    }
    return false;
}

int main(){
    cin >> h >> w;
    vector<vector<char>>G(h,vector<char>(w));
    vector<vector<int>>E(h,vector<int>(w,0));
    int sx,sy;
    rep(i,h)rep(j,w){
        cin >> G[i][j];
        if(G[i][j]=='S')sx=i,sy=j;
    }
    int n;
    cin >> n;
    rep(i,n){
        int r,c,e;
        cin >> r >> c >> e;
        r--,c--;
        E[r][c]=e;
    }
    vector<vector<bool>>seen(h,vector<bool>(w,false));
    int energy=0;
    if(dfs(G,E,sx,sy,seen,energy)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}