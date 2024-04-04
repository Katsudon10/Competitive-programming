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
void dfs(vector<string> &s,vector<vector<bool>> &seen,int x,int y,map<char,char> &next){
    seen[x][y]=true;
    rep(i,4){
        int dx=x+dxs[i];
        int dy=y+dys[i];
        if(dx<0 || dx>=h)continue;
        if(dy<0 || dy>=w)continue;
        if(s[dx][dy]!=next[s[x][y]])continue;
        if(seen[dx][dy])continue;
        dfs(s,seen,dx,dy,next);
    }
}

int main(){
    cin >> h >> w;
    vector<string>s(h);
    rep(i,h)cin >> s[i];
    if(s[0][0]!='s'){
        cout << "No" << endl;
        return 0;
    }

    map<char,char>next;
    next['s']='n';
    next['n']='u';
    next['u']='k';
    next['k']='e';
    next['e']='s';

    vector<vector<bool>>seen(h,vector<bool>(w));
    dfs(s,seen,0,0,next);
    if(seen[h-1][w-1])cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}