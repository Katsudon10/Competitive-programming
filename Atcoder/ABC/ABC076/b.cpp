#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k;
    cin >> n >> k;
    int ans=1;
    rep(i,n){
        ans=min(ans*2,ans+k);
    }
    cout << ans << endl;
    return 0;
}