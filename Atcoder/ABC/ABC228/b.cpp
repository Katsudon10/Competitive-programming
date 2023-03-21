#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,x;
    cin >> n >> x;
    int ans=0;
    vector<bool>f(n+1);
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    while(!f[x]){
        ans++;
        f[x]=true;
        x=a[x-1];
    }
    cout << ans << endl;

    return 0;
}