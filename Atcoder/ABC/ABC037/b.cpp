#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    rep(i,q){
        int l,r,t;
        cin >> l >> r >> t;
        l--,r;
        for(int j=l;j<r;j++){
            a[j]=t;
        }
    }
    rep(i,n){
        cout << a[i] << endl;
    }
    return 0;
}