#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    int sa=0,sb=0;
    rep(i,3){
        sa+=a%10;
        a/=10;
    }
    rep(i,3){
        sb+=b%10;
        b/=10;
    }
    cout << max(sa,sb) << endl;
    return 0;
}