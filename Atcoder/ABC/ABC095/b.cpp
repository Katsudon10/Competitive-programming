#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>m(n);
    rep(i,n) cin >> m[i];
    int ans=0;
    rep(i,n){
        x-=m[i];
        ans++;
    }
    sort(m.begin(),m.end());
    ans+=x/m[0];
    cout << ans << endl;
    return 0;
}