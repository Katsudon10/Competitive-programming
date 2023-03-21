#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>x(n);
    rep(i,n) cin >> x[i];
    int ans=0;
    rep(i,n){
        ans+=2*(min(x[i],abs(x[i]-k)));
    }
    cout << ans << endl;
    return 0;
}