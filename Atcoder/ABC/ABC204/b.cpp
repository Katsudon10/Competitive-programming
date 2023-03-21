#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a;
    cin >> n;
    int ans=0;
    rep(i,n){
        cin >> a;
        if(a>10) ans+=a-10;
    }
    cout << ans << endl;
    return 0;
}