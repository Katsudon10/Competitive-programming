#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<bool>a(n+1,true);
    rep(i,m){
        int num;
        cin >> num;
        a[num]=false;
    }
    int ans=0;
    for(int i=x-1;i>=0;i--){
        if(!a[i]) ans++;
    }
    int ans1=0;
    for(int i=x+1;i<=n;i++){
        if(!a[i]) ans1++;
    }
    cout << min(ans,ans1) << endl;
    return 0;
}