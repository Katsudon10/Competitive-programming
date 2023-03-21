#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>v(n),c(n);
    rep(i,n)cin >> v[i];
    rep(i,n)cin >> c[i];
    int ans=0;
    rep(i,n){
        ans+=max(0,v[i]-c[i]);
    }
    cout << ans << endl;
    return 0;
}