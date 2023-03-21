#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(n),c(m),d(m);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,m) cin >> c[i] >> d[i];
    rep(i,n){
        int dis=inf;
        int pos;
        rep(j,m){
            if(dis>abs(a[i]-c[j])+abs(b[i]-d[j])){
                dis=abs(a[i]-c[j])+abs(b[i]-d[j]);
                pos=j+1;
            }
        }
        cout << pos << endl;
    }
    return 0;
}