#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    ll ans=0;
    rep(i,n){
        ll a,b;
        cin >> a >> b;
        ans+=b*(b+1)/2-a*(a-1)/2;
    }
    cout << ans << endl;
    return 0;
}