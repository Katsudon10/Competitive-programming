#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m,k;
    cin >> n >> m;
    vector<int>a(m),b(m);
    rep(i,m)cin >> a[i] >> b[i];
    cin >> k;
    vector<int>c(k),d(k);
    rep(i,k) cin >> c[i] >> d[i];
    int ans=0;
    for(int bit=0;bit<(1<<k);bit++){
        vector<bool>ball(n);
        int tmp=0;
        for(int i=0;i<k;i++){
            if(bit & (1<<i)){
                ball[c[i]]=true;
            }else{
                ball[d[i]]=true;
            }
        }
        for(int j=0;j<m;j++){
            if(ball[a[j]] && ball[b[j]]) tmp++;
        }
        if(tmp>ans) swap(tmp,ans);
    }
    cout << ans << endl;  
    return 0;
}