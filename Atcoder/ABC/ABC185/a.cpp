#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int ans=inf;
    rep(i,4){
        int a;
        cin >> a;
        ans=min(ans,a);
    }
    cout << ans << endl;
    return 0;
}