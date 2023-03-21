#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll h,w;
    cin >> h >> w;
    if(h==1 || w==1){
        cout << 1 << endl;
        return 0;
    }
    ll n=h*w;
    ll ans=(n+1)/2;
    cout << ans << endl;
    return 0;
}