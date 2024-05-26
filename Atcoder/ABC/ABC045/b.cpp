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
    vector<string>s(3);
    rep(i,3)cin >> s[i];
    int v=0,ai=0,bi=0,ci=0;
    string ans;
    while(true){
        if(ai==s[0].size()+1){
            cout << 'A' << endl;
            return 0;
        }else if(bi==s[1].size()+1){
            cout << 'B' << endl;
            return 0;
        }else if(ci==s[2].size()+1){
            cout << 'C' << endl;
            return 0;
        }
        if(v==0){
            if(s[0][ai]=='a')v=0;
            else if(s[0][ai]=='b')v=1;
            else v=2;
            ai++;
        }else if(v==1){
            if(s[1][bi]=='a')v=0;
            else if(s[1][bi]=='b')v=1;
            else v=2;
            bi++;
        }else{
            if(s[2][ci]=='a')v=0;
            else if(s[2][ci]=='b')v=1;
            else v=2;
            ci++;
        }
    }
    return 0;
}