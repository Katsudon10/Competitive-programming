#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n,k;
    cin >> n >> k;
    ll x=n%k;
    cout << min(x,k-x) << endl;
    return 0;
}