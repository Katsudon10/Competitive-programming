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
    int n;
    cin >> n;
    vector<int>a(n+2);
    a[0]=0;
    a[n-1]=0;
    rep(i,n)cin >> a[i+1];
    ll s=0;
    rep(i,n+1)s+=abs(a[i+1]-a[i]);

    rep(i,n){
        ll ans=s-abs(a[i+2]-a[i+1])-abs(a[i+1]-a[i])+abs(a[i+2]-a[i]);
        cout << ans << endl;
    }
    return 0;
}