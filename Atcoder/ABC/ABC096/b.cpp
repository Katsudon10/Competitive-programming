#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int num=max(a,max(b,c));
    int ans=a+b+c-num;
    rep(i,k) num*=2;
    ans+=num;
    cout << ans << endl;
    return 0;
}