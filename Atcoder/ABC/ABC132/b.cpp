#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>p(n);
    rep(i,n) cin >> p[i];
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(p[i]>min(p[i-1],p[i+1]) && p[i]<max(p[i-1],p[i+1])) ans++;
    }
    cout << ans << endl;
    return 0;
}