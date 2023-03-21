#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int ans=inf;
    for(int i=0;i<=1e5;i++){
        ans=min(ans,i*2*c+a*max(0,x-i)+b*max(0,y-i));
    }
    cout << ans << endl;
    return 0;
}