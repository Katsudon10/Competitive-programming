#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll k;
    cin >> k;
    ll num=1;
    for(ll i=1;i<=k;i++){
        num*=i;
        num%=123456789011;
        if(num%k==0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}