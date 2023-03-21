#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<ll>x(n);
    rep(i,n) cin >> x[i];
    ll m=0,y=0,c=0;
    rep(i,n){
        m+=abs(x[i]);
        y+=x[i]*x[i];
        c=max(c,abs(x[i]));
    }
    cout << m << endl;
    cout << fixed << setprecision(10) << sqrt(y) << endl;
    cout << c << endl;
    return 0;
}