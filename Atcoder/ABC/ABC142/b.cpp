#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k;
    cin >> n >> k;
    int ans=0;
    rep(i,n){
        int h;
        cin >> h;
        if(h>=k) ans++;
    }
    cout << ans << endl;
    return 0;
}