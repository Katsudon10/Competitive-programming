#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b;
    cin >> a >> b;
    ll ans=1;
    rep(i,b)ans*=a;
    cout << ans << endl;
    return 0;
}