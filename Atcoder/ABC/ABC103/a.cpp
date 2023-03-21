#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>a(3);
    rep(i,3) cin >> a[i];
    sort(a.begin(),a.end());
    cout << a[2]-a[0] << endl;
    return 0;
}