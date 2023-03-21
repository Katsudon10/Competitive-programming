#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int ans=0;
    rep(i,3){
        int s,e;
        cin >> s >> e;
        ans+=s*e;
    }
    cout << ans/10 << endl;
    return 0;
}