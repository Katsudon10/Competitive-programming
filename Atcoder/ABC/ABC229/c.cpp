#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n,w;
    cin >> n >> w;
    vector<pair<ll,ll>>a(n);
    rep(i,n) cin >> a[i].first >> a[i].second;
    sort(a.rbegin(),a.rend());
    ll ans=0;
    rep(i,n){
        ans+=a[i].first*min(w,a[i].second);
        w-=min(w,a[i].second);
    }
    cout << ans << endl;
    return 0;
}