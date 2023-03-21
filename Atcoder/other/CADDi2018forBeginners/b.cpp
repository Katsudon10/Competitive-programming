#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,h,w;
    cin >> n >> h >> w;
    int ans=0;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        if(a>=h && b>=w)ans++;
    }
    cout << ans << endl;
    return 0;
}
