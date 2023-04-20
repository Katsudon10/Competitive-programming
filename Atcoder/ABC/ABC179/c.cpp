#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+=(n-1)/i;
    }
    cout << ans << endl;
    return 0;
}