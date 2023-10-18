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
    int n;
    ll mod=1000000007;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<ll>cnt(n);
    cnt[0]=a[0];
    rep(i,n-1)cnt[i+1]=cnt[i]+a[i+1];
    ll ans=0;
    rep(i,n)ans+=(a[i]*((cnt[n-1]-cnt[i])%mod))%mod;
    ans%=mod;
    cout << ans << endl;
    return 0;
}