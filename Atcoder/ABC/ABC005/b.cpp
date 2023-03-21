#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>t(n);
    rep(i,n)cin >> t[i];
    sort(t.begin(),t.end());
    cout << t[0] << endl;
    return 0;
}