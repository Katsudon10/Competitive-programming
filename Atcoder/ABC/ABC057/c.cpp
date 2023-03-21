#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll n;
    cin >> n;
    ll ans=to_string(n).size();
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ll b=n/i;
            int cur=max(to_string(i).size(),to_string(b).size());
            if(ans>cur)ans=cur;
        }
    }
    cout << ans << endl;
    return 0;
}