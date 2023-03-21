#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,k,s,t;
    cin >> a >> b >> c >> k >> s >> t;
    int ans=0;
    ans=a*s+b*t;
    if(s+t>=k) ans-=(s+t)*c;
    cout << ans << endl;
    return 0;
}