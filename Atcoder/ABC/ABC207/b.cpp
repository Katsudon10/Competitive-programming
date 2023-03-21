#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll blue=a,red=0;
    rep(i,a){
        blue+=b;
        red+=c;
        if(blue<=red*d){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}