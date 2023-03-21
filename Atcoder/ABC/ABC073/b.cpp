#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<bool>seat(100000,false);
    rep(i,n){
        int l,r;
        cin >> l >> r;
        l--;r--;
        for(int j=l;j<=r;j++) seat[j]=true;
    }
    int ans=0;
    rep(i,100000){
        if(seat[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}