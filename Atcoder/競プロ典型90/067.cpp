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

ll base8(string s){
    ll res=0;
    rep(i,s.size()){
        res=res*8+int(s[i]-'0');
    }
    return res;
}

string base9(ll n){
    if(n==0)return "0";
    string res;
    while(n>0){
        res=char(n%9+'0')+res;
        n/=9;
    }
    return res;
}

int main(){
    string n;
    int k;
    cin >> n >> k;
    rep(i,k){
        n=base9(base8(n));
        rep(j,n.size()){
            if(n[j]=='8')n[j]='5';
        }
    }
    cout << n << endl;
    return 0;
}