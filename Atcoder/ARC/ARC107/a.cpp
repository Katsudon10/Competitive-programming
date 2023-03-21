#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    a=a*(a+1)/2%998244353;
    b=b*(b+1)/2%998244353;
    c=c*(c+1)/2%998244353;
    cout << (a*b%998244353)*c%998244353 << endl;
    return 0;
}