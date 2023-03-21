#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<bool>a(360,false);
    a[0]=true;
    int d=0;
    rep(i,n){
        int A;
        cin >> A;
        d+=A;
        a[d%360]=true;
    }

    int ans=0;
    int cnt=0;
    rep(i,360+1){
        if(a[i%360]){
            ans=max(ans,cnt);
            cnt=0;
        }
        cnt++;
    }
    cout << ans << endl;
    return 0;
}