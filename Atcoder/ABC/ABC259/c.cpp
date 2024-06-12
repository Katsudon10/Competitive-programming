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
    string s,t;
    cin >> s >> t;
    vector<pair<char,int>>ps,pt;
    ps.emplace_back(s[0],1);
    pt.emplace_back(t[0],1);
    rep(i,s.size()-1){
        if(ps.back().first==s[i+1])ps.back().second++;
        else ps.emplace_back(s[i+1],1);
    }
    rep(i,t.size()-1){
        if(pt.back().first==t[i+1])pt.back().second++;
        else pt.emplace_back(t[i+1],1);
    }

    bool flag=true;
    if(ps.size()!=pt.size()){
        cout << "No" << endl;
        return 0;
    }
    rep(i,ps.size()){
        if(ps[i].first!=pt[i].first)flag=false;
        else if(ps[i].second > pt[i].second)flag=false;
        else if(ps[i].second==1 && pt[i].second>1)flag=false;
    }

    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}