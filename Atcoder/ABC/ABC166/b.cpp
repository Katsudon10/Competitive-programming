#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,k;
    cin >> n >> k;
    vector<bool>p(n);
    rep(i,k){
        int d;
        cin >> d;
        rep(j,d){
            int a;
            cin >> a;
            p[a-1]=true;
        }
    }
    int ans=0;
    rep(i,n){
        if(!p[i])ans++;
    }
    cout << ans << endl;
    return 0;
}