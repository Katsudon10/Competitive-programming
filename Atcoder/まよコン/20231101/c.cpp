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
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll>a(n);
    rep(i,n)cin >> a[i];
    ll s=0;
    ll t=0;
    rep(i,m)s+=a[i]*(i+1);
    rep(i,m)t+=a[i];
    ll ans=s;
    rep(i,n-m){
        s-=t-m*a[m+i];
        t=t-a[i]+a[m+i];
        ans=max(ans,s);
    }
    cout << ans << endl;
    return 0;
}