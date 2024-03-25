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
map<ll,ll>mp;
ll f(ll n){
    if(n==0)return 1;
    if(mp.count(n))return mp[n];
    ll a=n/2,b=n/3;
    mp[n]=f(a)+f(b);
    return mp[n];
}

int main(){
    ll n;
    cin >> n;
    ll ans=0;
    ans=f(n);
    cout << ans << endl;
    return 0;
}