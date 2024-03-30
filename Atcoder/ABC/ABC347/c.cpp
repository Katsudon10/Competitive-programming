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

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    vector<ll>d(n);
    rep(i,n)cin >> d[i];
    ll w=a+b;
    bool flag=true;
    rep(i,n){
        d[i]=d[i]%w;
    }
    int mind=*min_element(ALL(d));
    
    rep(i,n){
        if(d[i]-mind>=a)flag=false;
    }

    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}