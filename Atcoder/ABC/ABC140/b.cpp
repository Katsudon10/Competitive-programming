#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>a(n),b(n),c(n-1);
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];
    rep(i,n-1)cin >> c[i];
    int ans=0;
    rep(i,n){
        ans+=b[a[i]-1];
        if(a[i]!=n){
            if(a[i+1]==a[i]+1)ans+=c[a[i]-1];
        }
    }
    cout << ans << endl;
    return 0;
}