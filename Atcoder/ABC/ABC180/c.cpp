#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n;
    cin >> n;
    set<ll>num;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            num.insert(i);
            num.insert(n/i);
        }
    }
    for(ll a:num)cout << a << endl;
    return 0;
}