#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>d(n);
    rep(i,n)cin >> d[i];

    sort(d.begin(),d.end());
    int ans=max(0,d[n/2]-d[n/2-1]);
    cout << ans << endl;
    return 0;
}