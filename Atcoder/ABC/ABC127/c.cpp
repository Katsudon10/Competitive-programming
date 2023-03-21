#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,m;
    cin >> n >> m;
    int l,r;
    int lmax=1,rmin=n;
    rep(i,m){
        cin >> l >> r;
        lmax=max(lmax,l);
        rmin=min(rmin,r);
    }
    cout << max(rmin-lmax+1,0) << endl;
    return 0;
}