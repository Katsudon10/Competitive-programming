#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    cout << a*(n/(a+b))+min(a,n%(a+b)) << endl;
    return 0;
}