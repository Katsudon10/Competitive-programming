#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,s,t,w;
    cin >> n >> s >> t >> w;
    int ans=0;
    if(w>=s && w<=t)ans++;
    rep(i,n-1){
        int a;
        cin >> a;
        w+=a;
        if(w>=s && w<=t)ans++;
    }
    cout << ans << endl;
    return 0;
}