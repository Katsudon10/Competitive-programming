#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(max(a*c,a*d),max(b*c,b*d)) << endl;
    return 0;
}