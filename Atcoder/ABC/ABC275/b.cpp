#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    long long int a,b,c,d,e,f;
    long long int X=998244353;
    cin >> a >> b >> c >> d >> e >> f;
    ll abc=(a%X)*(b%X)%X*(c%X)%X;
    ll def=(d%X)*(e%X)%X*(f%X)%X;
    int ans=(abc-def+X)%X;
    cout << ans << endl;
    return 0;
}