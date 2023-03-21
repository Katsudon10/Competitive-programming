#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>p(n);
    rep(i,n) cin >> p[i];
    sort(p.begin(),p.end());
    int ans=0;
    rep(i,n-1)ans+=p[i];
    ans+=p[n-1]/2;
    cout << ans << endl;
    return 0;
}