#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>h(n);
    rep(i,n) cin >> h[i];
    int num=h[0];
    int ans=0;
    rep(i,n){
        if(h[i]>=num) ans++;
        num=max(num,h[i]);
    }
    cout << ans << endl;
    return 0;
}