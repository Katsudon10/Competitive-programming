#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>n(3);
    rep(i,3) cin >> n[i];
    sort(n.begin(),n.end());
    cout << n[0]+n[1]+10*n[2] << endl;
    return 0;
}