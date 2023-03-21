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
    for(ll i=1;i<=n;i++){
        if(i%15!=0 && i%3!=0 && i%5!=0) ans+=i;
    }
    cout << ans << endl;
    return 0;
}