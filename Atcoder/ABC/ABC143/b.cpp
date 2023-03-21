#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>d(n);
    rep(i,n) cin >> d[i];
    ll ans=0;
    rep(i,n-1){
        for(int j=i+1;j<n;j++){
            ans+=d[i]*d[j];
        }
    }
    cout << ans << endl;
    return 0;
}