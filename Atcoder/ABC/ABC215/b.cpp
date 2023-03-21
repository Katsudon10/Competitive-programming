#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll n;
    cin >> n;
    ll i=0;
    ll k=1;
    while(true){
        if(k>n){
            cout << i-1 << endl;
            return 0;
        }
        k*=2;
        i++;
    }
    return 0;
}