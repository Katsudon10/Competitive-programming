#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n;
    cin >> n;
    ll ans=1;
    for(ll i=1;i<=n/2;i++){
        if(i*i<=n){
            ans=i;
        }
    }
    cout << ans*ans << endl;
    return 0;
}