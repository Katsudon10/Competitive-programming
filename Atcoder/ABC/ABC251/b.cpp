#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,w;
    cin >> n >> w;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<bool>can(w+1);
    rep(i,n) if(a[i]<=w) can[a[i]]=true;
    rep(i,n)rep(j,i){
        int s=a[i]+a[j];
        if(s<=w) can[s]=true;
    }
    rep(i,n)rep(j,i)rep(k,j){
        int s=a[i]+a[j]+a[k];
        if(s<=w) can[s]=true;
    }
    int ans=0;
    for(int i=1;i<=w;i++){
        if(can[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}