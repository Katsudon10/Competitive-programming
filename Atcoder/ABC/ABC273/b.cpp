#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll x;
    int k;
    cin >> x >> k;
    ll n=10;
    for(ll i=0;i<k;i++){
        ll s=x%n;
        x-=s;
        s/=(n/10);
        if(s>=5){
            x+=n;
        }
        n*=10;
    }
    cout << x << endl;
    return 0;
}