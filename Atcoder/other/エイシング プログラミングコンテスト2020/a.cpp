#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int l,r,d;
    cin >> l >> r >> d;
    int ans=0;
    for(int i=l;i<=r;i++){
        if(i%d==0)ans++;
    }
    cout << ans << endl;
    return 0;
}