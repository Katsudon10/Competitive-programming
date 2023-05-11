#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    ll n,m,b;
    cin >> n >> m >> b;
    vector<int>A(n),C(m);
    rep(i,n)cin >> A[i];
    rep(i,m)cin >> C[i];
    
    ll ans=0;
    rep(i,n)ans+=A[i]*m;
    ans+=b*n*m;
    rep(i,m)ans+=C[i]*n;
    cout << ans << endl;
    return 0;
}