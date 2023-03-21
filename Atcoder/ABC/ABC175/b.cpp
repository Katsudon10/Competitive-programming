#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<ll>l(n);
    rep(i,n) cin >> l[i];
    sort(l.begin(),l.end());
    int ans=0;
    rep(i,n-2){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(l[i]!=l[j] && l[i]!=l[k] && l[j]!=l[k] && l[i]+l[j]>l[k]) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}