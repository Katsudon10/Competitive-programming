#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int ans=0;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    rep(i,n-1)for(int j=i+1;j<n;j++){
        ans=max(ans,abs(a[i]-a[j]));
    }
    cout << ans << endl;
    return 0;
}