#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>h(n);
    rep(i,n) cin >> h[i];
    sort(h.rbegin(),h.rend());
    ll ans=0;
    for(int i=k;i<n;i++){
        ans+=h[i];
    }
    cout << ans << endl;
    return 0;
}