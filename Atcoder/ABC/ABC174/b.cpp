#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll n,d;
    cin >> n >> d;
    int ans=0;
    rep(i,n){
        ll x,y;
        cin >> x >> y;
        if(d*d>=x*x+y*y)ans++;
    }
    cout << ans << endl;
    return 0;
}