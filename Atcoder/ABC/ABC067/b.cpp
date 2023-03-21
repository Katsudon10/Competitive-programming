#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>num(n);
    rep(i,n) cin >> num[i];
    sort(num.begin(),num.end());
    int ans=0;
    rep(i,k) ans+=num[n-1-i];
    cout << ans << endl;
    return 0;
}