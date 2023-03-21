#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m,c;
    cin >> n >> m >> c;
    vector<int>b(m);
    rep(i,m) cin >> b[i];
    vector<vector<int>>a(n,vector<int>(m));
    rep(i,n)rep(j,m) cin >> a[i][j];
    int ans=0;
    rep(i,n){
        int num=0;
        rep(j,m){
            num+=a[i][j]*b[j];
        }
        num+=c;
        if(num>0)ans++;
    }
    cout << ans << endl;
    return 0;
}