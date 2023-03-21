#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n;
    cin >> n;
    ll ans=0;
    ll m=10000;
    rep(i,n){
        ans+=m;
        m+=10000;
    }
    cout << ans/n << endl;
    return 0;
}