#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int p,q,r;
    cin >> p >> q >> r;
    cout << p+q+r-max(max(p,q),r) << endl;
    return 0;
}