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

int main(){
    string s,t;
    cin >> s >> t;
    if(t[2]=='X'){
        int v1=-1,v2=-1;
        v1=s.find(tolower(t[0]));
        v2=s.rfind(tolower(t[1]));
        if(v1<v2)cout << "Yes" << endl;
        else cout << "No" << endl;
    }else{
        int v1=-1,v2=-1,v3=-1;
        v1=s.find(tolower(t[0]));
        v3=s.rfind(tolower(t[2]));
        for(v2=v1+1;v2<v3;v2++){
            if(s[v2]==tolower(t[1]))break;
        }
        if(v1<v2 && v2<v3)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}