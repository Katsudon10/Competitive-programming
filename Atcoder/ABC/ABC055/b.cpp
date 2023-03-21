#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll n;
    cin >> n;
    ll ans=1;
    ll d=pow(10,9)+7;
    for(ll i=1;i<=n;i++){
        ans=ans*i%d;
    }
    cout << ans << endl;
    return 0;
}