#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int t;
    cin >> t;
    rep(i,t){
        ll n;
        cin >> n;
        for(ll j=2;j*j<=n/2;j++){
            if(n%(j*j)==0){
                cout << j << ' ' << n/(j*j) << endl;
                break;
            }
        }
    }
    return 0;
}