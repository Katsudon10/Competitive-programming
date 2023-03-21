#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    ll ans=0;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    int h=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<h){
            ans+=h-a[i];
        }else{
            h=a[i];
        }
    }
    cout << ans << endl;
    return 0;
}